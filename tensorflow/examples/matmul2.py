import tensorflow as tf
from tensorflow.core.protobuf import config_pb2
with tf.device('CPU'):
	config= config_pb2.ConfigProto()
	config.log_device_placement = True

	x = tf.Variable([ [1.,2.,3.],[4,5,6] ], dtype=tf.float32)

	w = tf.constant([ [2,1],[2,2],[3,2]], dtype=tf.float32)
	print(x)
with tf.device('cpu'):
	y = tf.matmul(x,w)


with tf.device('CPU'):
	sess = tf.Session(config=config)
	sess2 = tf.Session(config=config)
	print(sess.list_devices())
	init = tf.global_variables_initializer()

	sess2.run(init)
	
	result = sess2.run(y)

	print(x)

	print (result)
