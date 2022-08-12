const coap = require('coap')
const req = coap.request('coap://localhost/Nimesh--')

req.on('response', (res) => {
    res.pipe(process.stdout)
})

req.end()
