all: testq1 testq2 testq3 testq4

testq1: 
	g++ -std=c++11 -o testq1 testq1.cpp q1/negarr.cpp q1/proxy.cpp

testq2: 
	g++ -std=c++11 -o testq2 testq2.cpp q2/exponent.cpp q2/expoproxy.cpp

testq3: 
	g++ -std=c++11 -o testq3 testq3.cpp q3/exponent.cpp

testq4: 
	g++ -std=c++11 -o testq4 testq4.cpp  q4/averagereporter.cpp q4/graphreporter.cpp q4/dice.cpp

clean:
	del *.exe
