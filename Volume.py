import math

class Cube:
    def __init__(self, ndim=2, len=1.0):
        self.ndim = ndim
        self.len = len

    def CVolume(self):
        return math.pow(self.len, self.ndim)

    def print_info(self):
        print(f"Dimension: {self.ndim}, Length: {self.len}, Volume of the Cube: {self.CVolume()}")

class Sphere:
    def __init__(self, ndim=2, rad=1.0):
        self.ndim = ndim
        self.rad = rad

    def SVolume(self):
        return (math.pow(math.pi, self.ndim/2)*math.pow(self.rad, self.ndim) ) / math.gamma(self.ndim/ 2 + 1)

    def print_info(self):
        print(f"Dimension: {self.ndim}, Radius: {self.rad}, Volume of the Sphere: {self.SVolume()}")
