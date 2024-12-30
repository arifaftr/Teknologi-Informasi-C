print("\n===PROGRAM KONERSI TEMPERATUR===\n")
def hasil (celcius):
    reamur = (4/5) * celcius
    fahreheit = ((9/5) * celcius) +32
    kelvin = celcius +273
    print("================================================")
    print("suhu                    =",celcius,"Derajat Celcius")
    print("suhu dalam reamur       =",reamur,"Derajat Reamur")
    print("suhu dalam fahrenheit   =",fahreheit,"Derajat Fahrenheit")
    print("suhu dalam kelvin       =",kelvin,"Derajat Kelvin")
    print("================================================\n")
   
a=float(input("Masukan suhu Celcius : "))
hasil(a)