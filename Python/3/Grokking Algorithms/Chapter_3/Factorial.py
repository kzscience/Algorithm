def fact(x):
    if x == 1:
        return 1
    else:
        return x * fact(x-1)


def main():
    x = int(input())
    print(fact(x))

if __name__ =="__main__":
    main()