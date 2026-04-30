DEFINE SIZE = N 
STRUCT CircularBuffer: 
array buffer[SIZE] 
int head = 0 
int tail = 0 
int count = 0 
END STRUCT 
FUNCTION init(cb): 
cb.head = 0 
cb.tail = 0 
cb.count = 0 
END FUNCTION 
FUNCTION isFull(cb): 
END FUNCTION 
FUNCTION isEmpty(cb): 
END FUNCTION 
FUNCTION write(cb, data): 
IF isFull(cb): 
PRINT "Buffer Overflow" 
RETURN 
… 
END FUNCTION 
FUNCTION read(cb): 
IF isEmpty(cb): 
PRINT "Buffer Underflow" 
RETURN NULL 
… 
RETURN data 
END FUNCTION
FUNCTION main(): 
DECLARE CircularBuffer cb 
init(cb) 
DECLARE string name 
INPUT name 
// Append required suffix 
name = name + "CE-ESY" 
// Write each character to buffer 
FOR each char in name: 
write(cb, char) 
// Read back and print 
WHILE NOT isEmpty(cb): 
char = read(cb) 
PRINT char (without newline) 
END FUNCTION
