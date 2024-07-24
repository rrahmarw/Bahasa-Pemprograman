import sqlite3
import tkinter as tk
from tkinter import messagebox, simpledialog

def execute_db_query(query, data=None):
    conn = sqlite3.connect('maintenance_management.db')
    cursor = conn.cursor()
    try:
        cursor.execute(query, data or ())
        conn.commit()
        return cursor
    except sqlite3.Error as e:
        messagebox.showerror("Error", f"SQLite Error: {e}")
    finally:
        conn.close()

def add_data():
    table = simpledialog.askstring("Input", "Enter table name (Assets or MaintenanceActivities):")
    if table not in ['Assets', 'MaintenanceActivities']:
        messagebox.showwarning("Warning", "Invalid table name.")
        return

    fields = {
        'Assets': ('name', 'location', 'condition', 'last_maintenance_date'),
        'MaintenanceActivities': ('asset_id', 'activity', 'date', 'technician')
    }
    data = tuple(simpledialog.askstring("Input", f"Enter {field}:") for field in fields[table])
    
    query = f"INSERT INTO {table} ({', '.join(fields[table])}) VALUES ({', '.join('?' * len(fields[table]))})"
    execute_db_query(query, data)
    messagebox.showinfo("Success", "Data added successfully.")

def update_data():
    table = simpledialog.askstring("Input", "Enter table name (Assets or MaintenanceActivities):")
    column = simpledialog.askstring("Input", "Enter column name to update:")
    value = simpledialog.askstring("Input", "Enter new value:")
    condition_column = simpledialog.askstring("Input", "Enter column name for condition:")
    condition_value = simpledialog.askstring("Input", "Enter condition value:")
    
    query = f"UPDATE {table} SET {column} = ? WHERE {condition_column} = ?"
    execute_db_query(query, (value, condition_value))
    messagebox.showinfo("Success", "Data updated successfully.")

def delete_data():
    table = simpledialog.askstring("Input", "Enter table name (Assets or MaintenanceActivities):")
    condition_column = simpledialog.askstring("Input", "Enter column name for condition:")
    condition_value = simpledialog.askstring("Input", "Enter condition value:")
    
    query = f"DELETE FROM {table} WHERE {condition_column} = ?"
    execute_db_query(query, (condition_value,))
    messagebox.showinfo("Success", "Data deleted successfully.")

# Create the main window
root = tk.Tk()
root.title("Maintenance Management System")

# Create and place buttons
buttons = {
    "Add Data": add_data,
    "Update Data": update_data,
    "Delete Data": delete_data
}

for text, command in buttons.items():
    tk.Button(root, text=text, command=command).pack(pady=10)

# Start the Tkinter event loop
root.mainloop()
