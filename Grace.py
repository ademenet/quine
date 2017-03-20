#!/usr/bin/python3
"""
	Comment one
"""
def ft(name):
	f = open(name, "w")
	s = "#!/usr/bin/python3{}{}{}{}{}{}Comment one{}{}{}{}{}def ft(name):{}{}f = open(name, {}w{}){}{}s = {}{}{}{}{}f.write(s.format(chr(10),chr(34),chr(34),chr(34),chr(10),chr(9),chr(10),chr(34),chr(34),chr(34),chr(10),chr(10),chr(9),chr(34),chr(34),chr(10),chr(9),chr(34),s,chr(34),chr(10),chr(9),chr(10),chr(34),chr(34),chr(10))){}ft({}Grace_kid.py{}){}"
	f.write(s.format(chr(10),chr(34),chr(34),chr(34),chr(10),chr(9),chr(10),chr(34),chr(34),chr(34),chr(10),chr(10),chr(9),chr(34),chr(34),chr(10),chr(9),chr(34),s,chr(34),chr(10),chr(9),chr(10),chr(34),chr(34),chr(10)))
ft("Grace_kid.py")
