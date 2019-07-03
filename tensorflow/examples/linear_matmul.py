import tensorflow as tf
with tf.device('cpu'):
# 앞의 코드에서는 정수였는데, 실수로 바뀌었다. 정수로 처리하면 에러.
	x_data = [[1., 0., 3., 0., 5.], [0., 2., 0., 4., 0.]]   # W의 값은 [[-0.49763036  0.79181528]]
	y_data  = [1, 2, 3, 4, 5]

	W = tf.Variable(tf.random_uniform([1, 2], -1.0, 1.0))   # [2, 1]은 안 된다. 행렬 곱셈이니까.
	b = tf.Variable(tf.random_uniform([1], -1.0, 1.0))

# W와 곱해야 하기 때문에 x_data를 실수로 변경
	hypothesis = tf.matmul(W, x_data) + b                   # (1x2) * (2x5) = (1x5)

	cost = tf.reduce_mean(tf.square(hypothesis - y_data))

	rate = tf.Variable(0.1)
	optimizer = tf.train.GradientDescentOptimizer(rate)
	train = optimizer.minimize(cost)

	init = tf.initialize_all_variables()

	sess = tf.Session()
	sess.run(init)

# 테스트 출력
	print(sess.run(W))
	print(sess.run(tf.matmul(W, x_data)))

	for step in range(2001):

    		sess.run(train)

    		if step%20 == 0:
        		print(step, sess.run(cost), sess.run(W), sess.run(b))

	sess.close()


