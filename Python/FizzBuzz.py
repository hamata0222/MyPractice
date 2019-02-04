# -*- coding : utf-8 -*-
MAX_VALUE = 100

def main():
    for i in range(MAX_VALUE):
        if (i % 15) == 0:
            print 'FizzBuzz'
        elif (i % 5) == 0:
            print 'Buzz'
        elif (i % 3) == 0:
            print 'Fizz'
        else:
            print '{0:d}'.format(i)

if __name__ == '__main__':
    main()

