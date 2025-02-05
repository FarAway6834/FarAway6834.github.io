#!/usr/env/python3 python

def main():
	p=input()
	while p:
		print(f"pip { {'D':'download','X':'install'}[p[0]]} -r {p[1:].replace('E:', ' --extra-index-url=').replace('F:', ' --find-links=').replace('I:', ' --i=').replace('N', ' --no-index')}")
		try:p=input()
		except EOFError:p=False

if __name__=="__main__":main()
