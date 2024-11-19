print ("hello world")

addition = 2+2
result = addition + 7
print(result)

name = input('masukkan nama yang mulia: ')
print(name)

greeting = 'Saya mulai belajar Python!'  
print(greeting)

firstName = 'aura'
lastName = 'mezza'
age = 20
isMarried = False

print('firstName:' + firstName)
print('lastName:' + lastName)
print('age:' + str(age))
print('isMarried:' + str(isMarried)) 

data_diri = {'firstName' : 'aura', 'lastName' : 'mezza', 'age' : 20, 'isMarried' : False}
print(data_diri)


var_list = [792564, 465231, 203748, 981037, 857219, 314092, 608345, 123907, 736890, 985026, 
179430, 450218, 680934, 543187, 978260, 283045, 617902, 405826, 820913, 731095, 
592403, 109237, 874956, 605132, 214978, 674519, 391047, 825160, 509317, 768490, 
950283, 307491, 487610, 532198, 605132, 160984, 609873, 245016, 879043, 734126, 
351809, 670594, 920873, 605132, 596410, 135890, 804512, 683420, 290753, 931560, 
175430, 950672, 378490, 284105, 746098, 503624, 605132, 167432, 974810, 519463, 
407835, 740326, 281709, 630921, 953284, 605132, 429731, 183607, 369012, 541380, 
605132, 217605, 496803, 827309, 153607, 605132, 720459, 381904, 594031, 810235, 
673925, 492157, 835096, 260481, 956024, 540329, 806295, 320158, 751903, 980465, 
235780, 857943, 605132, 125094, 620493, 913250]

panjang = len(var_list)
maksimal = max(var_list)
minimal = min(var_list)
banyak = var_list.count(605132)

print(panjang)
print(maksimal)
print(minimal)

dico = 750000
diskon = 0.1 * dico
total_harga = dico - diskon
print(total_harga)

evenNumber = [i for i in range(501) if i%2 == 0]
print(evenNumber)

var_array = [i for i in range(101)]
total = 0
for j in range(100):
    total += j
result = total / j
print(j)
print(result)

def segi_empat(panjang,lebar):
    luas_segi_empat = panjang*lebar
    return luas_segi_empat

segi_empat_satu = segi_empat(5,6)
print(segi_empat_satu)

def greeting(nama, umur):
    return "halo " + nama + "! " + umur

print(greeting("aura", "20"))

def hitung (*args):
    total = sum(args)
    return total

print(hitung(4, 6, 9))


class sayuran:
    def __init__(self, warna, berat):
        self.warna = warna
        self.berat = berat


tomat = sayuran('merah', 8)

print(tomat.warna)
print(tomat.berat)


class Mobil:
    def __init__(self, merek):
        self.merek = merek
    
    @staticmethod
    def intro_mobil():
        print("Ini adalah metode dari kelas Mobil")
        
Mobil.intro_mobil()
mobil_1 = Mobil("DicodingCar")
mobil_1.intro_mobil()
