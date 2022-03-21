def sum_arr(array, size):
    if len(array) ==1:
         return array[0];

    return array[0] + sum_arr(array[1:], size)


def main():
    size =int(input())
    array = []
    for _ in range(size):
        array += list(map(int, input().split()))
    print(sum_arr(array, size))

if __name__ =="__main__":
    main()