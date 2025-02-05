#!/usr/env/python3 python

def enput():
	try:return input()
	except EOFError:return False

def main():
	p=enput()
	while p:
		print(f"pip { {'D':'download','X':'install'}[p[0]]} -r {p[1:].replace('E:', ' --extra-index-url=').replace('F:', ' --find-links=').replace('I:', ' --i=').replace('N', ' --no-index')}")
		p=enput()

if __name__=="__main__":main()
