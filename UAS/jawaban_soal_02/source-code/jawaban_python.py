import csv

def baca_csv(nama_file):
    """Membaca file CSV dan mengembalikan data sebagai list of lists."""
    data = []
    try:
        with open(nama_file, 'r') as file:
            reader = csv.reader(file)
            for baris in reader:
                data.append(baris)
    except FileNotFoundError:
        return None, "Kesalahan: File tidak ditemukan."
    except csv.Error as e:
        return None, f"Kesalahan dalam file CSV: {e}"
    return data, None

def hitung_total_dan_rata_rata(data):
    """Menghitung total dan rata-rata dari kolom numerik dalam data CSV."""
    try:
        # Menganggap bahwa baris pertama adalah header
        header = data[0]
        total = 0
        count = 0
        
        # Menyaring header untuk memastikan kolom numerik ada
        for i, kolom in enumerate(header):
            try:
                total_kolom = sum(float(baris[i]) for baris in data[1:] if baris[i])
                count += len(data[1:])
                total += total_kolom
            except ValueError:
                # Melewati kolom yang tidak dapat dikonversi menjadi float
                continue

        rata_rata = total / count if count > 0 else 0
    except IndexError:
        return None, "Kesalahan: Format data tidak sesuai."
    except Exception as e:
        return None, f"Kesalahan umum: {e}"

    return total, rata_rata

def proses_file_csv(nama_file):
    """Fungsi utama untuk membaca file CSV dan memproses datanya."""
    data, error = baca_csv(nama_file)
    if error:
        print(error)
        return

    total, rata_rata = hitung_total_dan_rata_rata(data)
    if total is None:
        print(rata_rata)  # 'rata_rata' di sini adalah pesan kesalahan
    else:
        print(f"Total nilai kolom numerik: {total}")
        print(f"Rata-rata nilai kolom numerik: {rata_rata}")

# Contoh penggunaan
if __name__ == "__main__":
    nama_file = 'data.csv'
    proses_file_csv(nama_file)
