cmd_fs/binfmt_misc.ko := arm-poky-linux-gnueabi-ld -EL -r  -T /home/tic-imx/Desktop/SCM/kernel_scm/scripts/module-common.lds --build-id  -o fs/binfmt_misc.ko fs/binfmt_misc.o fs/binfmt_misc.mod.o