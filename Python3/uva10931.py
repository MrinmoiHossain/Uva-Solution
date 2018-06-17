class Main:
    def __init__(self):
        while True:
            self.n = int(input())
            if self.n == 0:
                break
            self.output()

    def output(self):
        print("The parity of %s is %d (mod 2)." % (self.dec_bin(), self.oneCount()))

    def dec_bin(self):
        return str(bin(self.n)[2:])

    def oneCount(self):
        return self.dec_bin().count('1')

if __name__ == '__main__':
    obj = Main()
