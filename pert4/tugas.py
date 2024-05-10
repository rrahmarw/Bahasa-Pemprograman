#membuat kalkulator

#fungsi perkalian
def penjumlahan(x,y):
    return x + y

#fungsi pengurangan
def pengurangan(x,y):
    return x - y

#fungsi pembagian
def pembagian(x,y):
    return x / y

#fungsi perkalian 
def perkalian(x,y):
    return x * y

# menu operasi
print("pilih perhitungan:")
print("1.penjumlahan")
print("2.pengurangan")
print("3.pembagian")
print("4.perkalian")

# meminta input user
pilihan = input("pilih perhitungan:(1/2/3/4/5):")

no1 = int(input("masukkan angka pertama:"))
no2 = int(input("masukkan angka kedua:"))

if pilihan == '1':
   print(no1,"+",no2,"=", penjumlahan(no1,no2))

elif pilihan == '2':
   print(no1,"-",no2,"=", pengurangan(no1,no2))

elif pilihan == '3':
   print(no1,"/",no2,"=", pembagian(no1,no2))

elif pilihan == '4':
   print(no1,"*",no2,"=", perkalian(no1,no2))


else:
   print("Input salah, coba ulangi") 
