#!/bin/python3

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input())
    sol=1
    for i in range(n,0,-1):
        sol=sol*i
    print(sol)
