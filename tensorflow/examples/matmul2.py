import tensorflow as tf
from tensorflow.core.protobuf import config_pb2
with tf.device('GPU'):
	config= config_pb2.ConfigProto()
	config.log_device_placement = True

	x = tf.Variable([ [1.,2.,3.] ], dtype=tf.float32)

	w = tf.constant([ [2.],[2.],[2.]], dtype=tf.float32)

with tf.device('SGX'):
	y = tf.matmul(x,w)


with tf.device('GPU'):
	sess = tf.Session(config=config)
	sess2 = tf.Session(config=config)
	print(sess.list_devices())
	init = tf.global_variables_initializer()

	sess2.run(init)
	
	result = sess2.run(y)



	print (result)
