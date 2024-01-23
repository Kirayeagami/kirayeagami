def calculator(x,y,z):
    if z =='+':
        return x+y
    elif z =='-':
        return x-y
    elif z =='*':
        return x*y
    elif z =='/':
        return x/y
    else:
        return('invalid input')
x =int(input('enter your Number: '))
y =int(input('enter your Number: '))
z =input('enter your operation Like +,-,*,/: ')
m =calculator(x,y,z)
print(m)
