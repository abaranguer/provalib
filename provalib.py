#!/usr/bin/python2.7
# -*- coding: utf-8 -*-
from ctypes import *

if __name__ == "__main__":
  prova = CDLL("libprova.so.1")
  print "Sortida de funcio1(7)"
  ret1 = prova.funcio1(7)
  print "\nSortida de funcio2(3)"
  ret2 = prova.funcio2(3)

  print "\nret1: %d; ret2: %d" % (ret1, ret2)
