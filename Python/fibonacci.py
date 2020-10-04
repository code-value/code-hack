def fibonacci(n):
    a = 0
    b = 1
    if n == 0:
        return a
    elif n == 1:
        return b
    else:
        for i in range(2, n+1):
            c = a + b
            a = b
            b = c
        return b

# added one-liner
fib = lambda n: n if n<2 else fib(n-1)+fib(n-2)

print(fibonacci(10))
print(fib(10))
