def salto_ultima_regiao(n):
	
	for k in range(1,1000):
		regioes = list(range(2,n+1))

		idx = 0

		while len(regioes)>1:

			idx = (idx+k-1)%len(regioes)

		if regioes[0]==13:	
			return k
def main():


	while True:
		n = int(input())
		
		if(n==0):
			break

		last = salto_ultima_regiao(n)
		print(last)

		
if __name__ == "__main__":
	main()
