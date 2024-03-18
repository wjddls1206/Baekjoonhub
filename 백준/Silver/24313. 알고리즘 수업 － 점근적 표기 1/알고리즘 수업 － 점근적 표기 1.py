# f(n) = a1 * n  + a0

a1, a0 = map(int, input().split())

c = int(input())
n0 = int(input())

# f(n0)
f_n0 = a1 * n0 + a0

# c * g(n0)
c_g_n0 = c * n0

if a1 <= c and f_n0 <= c_g_n0:
    print(1)

else:
    print(0)
