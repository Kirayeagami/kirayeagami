import random

k=1
i=1
x= random.randint(1,100)
while (i == k):
    print(f"attempt :{i}")
    
    num =int(input('Enter Your Number :'))
    
    if num>=(x+6):
        print('You are too HIGH')
        k=i=i+1

    elif num<=(x-6):
        print('You are too LOW')
        k=i=i+1
    elif num>=(x+1) and num <=(x+5):
        print('a Little High,\nYou are too close')
        k=i=i+1
    elif num>=(x-5) and num <=(x-1):
        print('You Little Low,\nYou are too close')
        k=i=i+1
    elif num==x:
        print('CORRECT! !')
        i+=1
print(f'You Guessed The Number After {k} Attemts')