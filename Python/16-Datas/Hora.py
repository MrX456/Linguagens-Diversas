#Para pegar a hora atual no python precisamos importar datetime
from datetime import datetime

#Mostrar data e hora atual(formato americano)
agora = datetime.now()
print(agora)

print("=======================")

#Mostrar apenas a hora hora:minuto:segundo
print(agora.strftime("%H:%M:%S"))
