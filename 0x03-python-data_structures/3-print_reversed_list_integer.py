#!/usr/bin/python3
def print_reversed_list_integer(my_list=[]):
	if not my_list:
		return None
	for i in reversed(my_list):
		peint("{:d}".format(i))
