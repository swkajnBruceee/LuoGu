def find_roots(a,b,c,d):
    def f(x):
        return a*x**3 + b*x**2 + c*x + d
    left = -100
    while left <= 100:
        right = left + 1
        if f(left) == 0:
            root = "{:.2f}".format(float(left))
            print(root,end=' ')


        if f(left)*f(right) < 0:
            mid = (left+right)/2
            while right - left >= 0.0001:
                if f(left) * f(mid) < 0:
                    right = mid
                else:
                    left = mid
                mid = (left + right) / 2
            root = "{:.2f}".format(float(mid))
            left = mid + 1
            print(root,end=' ')
        else:
            left += 1

a1,b1,c1,d1 = map(float,input().split())
find_roots(a1,b1,c1,d1)





