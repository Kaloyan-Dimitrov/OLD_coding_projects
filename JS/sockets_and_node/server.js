var express = require('express');
var app = express();
var server = app.listen(3000);
app.use(express.static('public'));
var socket = require('socket.io');
console.log("My socket server is running!");
var io = socket(server);

var conversasion = [], users = [];

io.sockets.on('connection', function(socket){
  console.log('new connection:' + socket.id);
  socket.on('message', function(data){
    socket.broadcast.emit('new_message', data);
  });
});
