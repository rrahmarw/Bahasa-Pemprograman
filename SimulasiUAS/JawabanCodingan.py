import pandas as pd

# Fungsi untuk input data pemeliharaan perangkat IT secara manual
def input_data_pemeliharaan():
    data = {
        "No": [],
        "Nama Perangkat": [],
        "Jenis Perangkat": [],
        "Tanggal Pembelian": [],
        "Tanggal Pemeliharaan": [],
        "Jenis Pemeliharaan": [],
        "Deskripsi Masalah": [],
        "Tindakan Perbaikan": [],
        "Teknisi": []
    }
    
    n = int(input("Masukkan jumlah data pemeliharaan yang ingin dimasukkan: "))
    
    for i in range(n):
        print(f"\nMasukkan data untuk perangkat ke-{i+1}:")
        data["No"].append(i+1)
        data["Nama Perangkat"].append(input("Nama Perangkat: "))
        data["Jenis Perangkat"].append(input("Jenis Perangkat: "))
        data["Tanggal Pembelian"].append(input("Tanggal Pembelian (dd-mmm-yyyy): "))
        data["Tanggal Pemeliharaan"].append(input("Tanggal Pemeliharaan (dd-mmm-yyyy): "))
        data["Jenis Pemeliharaan"].append(input("Jenis Pemeliharaan: "))
        data["Deskripsi Masalah"].append(input("Deskripsi Masalah: "))
        data["Tindakan Perbaikan"].append(input("Tindakan Perbaikan: "))
        data["Teknisi"].append(input("Teknisi: "))
    
    return pd.DataFrame(data)

# Memasukkan data pemeliharaan secara manual
df_pemeliharaan = input_data_pemeliharaan()

# Menampilkan DataFrame
print("\nData Pemeliharaan Perangkat IT:")
print(df_pemeliharaan)
