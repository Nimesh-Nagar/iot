
const coap = require('coap') // or coap
const server = coap.createServer()

server.on('request', (req, res) => {
  //  console.log(res);
    console.log(res.url) // 
    if(req.url=='/temp'){
        //GET request
        if(req.code==0.01){
            res.end('temp: 24.5')
        }
        else{
            res.code==4.04;
            res.end("not supported");
        }
    }
    else{
        res.end("hello")
    }
    res.end('Hello ' + req.url.split('/')[1] + '\n')
})

server.listen(() => {
    console.log('server started')
})