if __name__ == '__main__':
    while True:
        try:
            n, a = map(int, input().split())
        except:
            break
        ans = 0
        for i in range(1, n+1):
            ans += i * (a ** i)

        print(ans)
