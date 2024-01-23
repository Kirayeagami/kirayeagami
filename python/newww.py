name={}
a=0
n=int(input('how many data you want to Enter ?:'))
for i in range(1,n):
    #if i%2==0:
        name[i]=i**2
        a+=i**2
    
for i,j in name.items():
    print(f'{i}--->>{j}')

print(f'the addition of number {n}is {a}')