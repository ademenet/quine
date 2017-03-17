# TODO remplacer les triples " par des triples chr(34)
#!/usr/bin/python3
"""
	Comment one
"""
def f():
	s = "#!/usr/bin/python{}{}{}{}Comment one{}{}{}def f():{}{}s = {}{}{}{}{}print(s.format(chr(10),'\"\"\"',chr(10),chr(9),chr(10),'\"\"\"',chr(10),chr(10),chr(9),'\"',s,'\"',chr(10),chr(9),chr(10),chr(10),chr(10),chr(9),'\"\"\"',chr(10),chr(9),chr(9),chr(10),chr(9),'\"\"\"',chr(10),chr(9),chr(10),chr(10),chr(10))){}{}def main():{}{}{}{}{}{}Comment two{}{}{}{}{}f(){}{}main(){}"
	print(s.format(chr(10),'"""',chr(10),chr(9),chr(10),'"""',chr(10),chr(10),chr(9),'"',s,'"',chr(10),chr(9),chr(10),chr(10),chr(10),chr(9),'"""',chr(10),chr(9),chr(9),chr(10),chr(9),'"""',chr(10),chr(9),chr(10),chr(10),chr(10)))

def main():
	"""
		Comment two
	"""
	f()

main()
