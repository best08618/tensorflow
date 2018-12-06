work history

Now, we support the following python script
with tf.device('/sgx:0'):

ThreadPoolDeviceFactory creates CPU devices
Likewise, SGXThreadPoolDeviceFactory could create SGX-thread devices

Note that SGX (software guard extension) is Intel-specific, and 
SGX device is a logical mode of a cpu; not a physical device.

To-do list:
	Consider binding with asylo
	sgx-cpu migration using protobuf (aka. asylo does)
	move opkernel into enclave

