#!/usr/bin/python3
import os
i = 5
def ft():
	global i
	if __file__ != "./Sully.py":
		i = i - 1
	name = "Sully_{}.py".format(i)
	f = open(name, "w")
	s = "#!/usr/bin/python3{}import os{}i = {}{}def ft():{}{}global i{}{}if __file__ != {}./Sully.py{}:{}{}{}i = i - 1{}{}name = {}Sully_{}{}.py{}.format(i){}{}f = open(name, {}w{}){}{}s = {}{}{}{}{}f.write(s.format(chr(10),chr(10),i,chr(10),chr(10),chr(9),chr(10),chr(9),chr(34),chr(34),chr(10),chr(9),chr(9),chr(10),chr(9),chr(34),chr(123),chr(125),chr(34),chr(10),chr(9),chr(34),chr(34),chr(10),chr(9),chr(34),s,chr(34),chr(10),chr(9),chr(10),chr(9),chr(10),chr(9),chr(9),chr(34),chr(123),chr(125),chr(123),chr(125),chr(34),chr(10),chr(10))){}{}if i > 0:{}{}{}os.system({}chmod 777 Sully_{}{}.py; ./Sully_{}{}.py{}.format(i, i)){}ft(){}"
	f.write(s.format(chr(10),chr(10),i,chr(10),chr(10),chr(9),chr(10),chr(9),chr(34),chr(34),chr(10),chr(9),chr(9),chr(10),chr(9),chr(34),chr(123),chr(125),chr(34),chr(10),chr(9),chr(34),chr(34),chr(10),chr(9),chr(34),s,chr(34),chr(10),chr(9),chr(10),chr(9),chr(10),chr(9),chr(9),chr(34),chr(123),chr(125),chr(123),chr(125),chr(34),chr(10),chr(10)))
	if i > 0:
		os.system("chmod 777 Sully_{}.py; ./Sully_{}.py".format(i, i))
ft()
