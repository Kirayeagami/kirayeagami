#Age PY code


age = int(input('enter your age :'))
if age<=0:
    print('Invaild age')
elif age >0 and age<=10:
	print('you are a child')
elif age>10 and age<18:
	print('you are a teenager')
elif age>18 and age<31:
	print('you are an adult person')
elif age>31 and age<51:
	print('you are ~ old person')
else:
	print('you are a old person')