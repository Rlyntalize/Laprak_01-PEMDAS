alas = 5
tinggi = 12

sisi_a = tinggi
sisi_c = alas
sisi_b = (alas ** 2 + tinggi ** 2) ** 0.5

keliling = sisi_a + sisi_b + sisi_c
luas = alas * tinggi / 2

print("Diketahui :")
print("Alas =", alas, "cm")
print("Tinggi =", tinggi, "cm")

print("\nJawab :")
print("Sisi A =", int(sisi_a), "cm")
print("Sisi B =", int(sisi_b), "cm")
print("Sisi C =", int(sisi_c), "cm")
print("Keliling =", int(keliling), "cm")
print("Luas =", int(luas), "cm2")