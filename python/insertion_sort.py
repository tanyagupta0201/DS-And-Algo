#!/usr/bin/python
# -*- coding: utf-8 -*-
# PROGRAM OF INSERTION-SORT
# AUTHOR: SAURABH GUPTA
# DATE: 23/10/2021

l = input().split(' ')
i = 0
n = len(l)
j = 0
c = 0
while i < n - 1:
    j = i + 1
    while j > 0 and int(l[j - 1]) > int(l[j]):
        c = int(l[j - 1])
        l[j - 1] = int(l[j])
        l[j] = c
        j = j - 1
    i = i + 1
print 'sorted array:'
print l
