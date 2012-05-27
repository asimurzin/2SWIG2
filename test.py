#!/usr/bin/env python

from baseClass import *
aBase = baseClass.create()
aBase.baseClass_print()
aBase.ext_baseClass_print()

from derivedClass import *
aDerived = derivedClass.create()
aDerived.baseClass_print()
aDerived.ext_baseClass_print()
aDerived.derivedClass_print()

print "OK"
