import socket

print("---------------------------")
print("\n")
print("       SUPER PROGRAM       ")
print("\n")
print("---------------------------")

while True:

	ip = input(">>> ")

	if ip == 'break':
		break

	alvo = socket.gethostbyname(ip)

	portas = [21,80,443,2121,8080]

	print ("o endereco do alvo e {}\n".format(alvo))

	for porta in portas:
		cliente = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
		cliente.settimeout(0.5)
		codigo = cliente.connect_ex((ip, porta))
		if codigo == 0:
			print (porta, "open")

	choice = input("Quer continuar? \n >>> ")

	if choice != 'y' and choice != 'n':
		while True:
			print("ERROR! \nDigite novamente!")
			choice = input(">>> ")
			if choice == 'y' or choice == 'n':
				break
			else:
				continue
	elif choice == 'y':
		print("\n" * 2)
	elif choice == 'n':
		break
