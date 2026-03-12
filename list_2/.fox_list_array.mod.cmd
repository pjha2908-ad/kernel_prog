savedcmd_fox_list_array.mod := printf '%s\n'   fox_list_array.o | awk '!x[$$0]++ { print("./"$$0) }' > fox_list_array.mod
