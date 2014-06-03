-- Begin code
local luv = require('luv')
local client = luv.net.tcp()
client:connect('127.0.0.1', 8080)

while true do
	local msg = luv.stdin:read()
	print("msg",msg)
	client:write(msg)
	print(client:read())
end

client:close()
-- End code
