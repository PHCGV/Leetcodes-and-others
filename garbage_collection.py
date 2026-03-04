import gc
import sys

#gc.collect()

class No:
    def __init__(self, nome):
        self.nome = nome
        self.proximo = None

# Criando objetos
a = No("A")
b = No("B")
print(f"\nReferências para A: {sys.getrefcount(a)}")
print(f"Referências para B: {sys.getrefcount(b)}")

# Referências cíclicas
a.proximo = b
b.proximo = a
print(f"\nDepois de criar referência cíclica:")
print(f"\nReferências para A: {sys.getrefcount(a)}")
print(f"Referências para B: {sys.getrefcount(b)}")

# Deletando objetos
print("\nDeletando objetos A e B...")
del a
del b
coletas = gc.collect()
print(f"\nColetas realizadas: {coletas}")
