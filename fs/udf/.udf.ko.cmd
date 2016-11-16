cmd_fs/udf/udf.ko := arm-poky-linux-gnueabi-ld -EL -r  -T /home/tic-imx/Desktop/SCM/kernel_scm/scripts/module-common.lds --build-id  -o fs/udf/udf.ko fs/udf/udf.o fs/udf/udf.mod.o
