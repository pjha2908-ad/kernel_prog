<h3>Links: </h3>
<ul>
  <li>https://thelearningjourneyebooks.com/ebooks/TheLinuxKernelDataStructuresJourney_v2.0_April2024.pdf</li>
  <li>https://medium.com/embedworld/maximizing-performance-in-embedded-linux-with-cache-aware-programming-ec3d7ad21e5a</li>
</ul>

<h3><mark><b>Command: <br>==========</b></mark></h3>
<table>
  <tr>
    <th>Command</th>
    <th>Description</th>
  </tr>

  <tr>
    <td>df(disk free)</td>
    <td>The df command shows disk space usage for all mounted filesystems.<br> 
      <b>Options:</b><br>
      <b>-h : </b>human readable (MB/GB)<br>
      <b>--local: </b>locally mounted filesystem<br>
    </td>
  </tr>

  <tr>
    <td>echo c &gt; /proc/sysrq-trigger</td>
    <td>
      <ul>
        <li><b>The Command: </b>It sends the "c" (crash) signal directly to the kernel's
          <b>SysRq (System Request)</b> handler.
        </li>
        <li><b>The Result: </b>The kernel will instantly trigger a "NULL pointer dereference."</li>
        <li><b>Why do this?</b>Developers use it to test if their Kdump (Kernel Dump)<br>
          configuration is working. If set up correctly, the system won't just freeze;<br>
          it will save a "memory snapshot" (vmcore) to your disk so you can analyze exactly<br>
          why it crashed later.
        </li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>efibootmgr -v</td>
    <td>To view the active boot entries registered in your NVRAM, we can use the efibootmgr command.
      <ul>
        <li>• efibootmgr makes managing UEFI boot targets possible.</li>
        <li>You can use efibootmgr  to list all current boot targets.</li>
        <li>Active boot entries are marked with a *</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>free -m</td>
    <td>The free -m command provides a snapshot of your system's memory (RAM) usage in Megabytes.</td>
  </tr>

  <tr>
    <td>free -mh</td>
    <td>
      <ul>
        <li><b>total: </b>Your VM's total assigned RAM.</li>
        <li><b>used: </b>RAM currently taken by Ubuntu and your running processes.</li>
        <li><b>free: </b>RAM that is completely empty.</li>
        <li><b>buff/cache: </b>RAM the kernel is using for things like the SLAB and disk<br>
          caching to speed things up.</li>
        <li><b>available: </b>The "real" amount of RAM you can still use before the system starts<br>
          slowing down.
        </li>
        <li><b>Gi</b> stands for Gibibytes.</li>
        <li>While we often use "GB" (Gigabytes) in everyday conversation, computers and Linux<br>
          tools like free use <b>binary units (powers of 2)</b> rather than decimal units (powers<br>
          of 10) to be more precise about memory.
        </li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>getconf -a | grep CACHE_LINESIZE</td>
    <td>CPU cacheline detail. (CPU read/write data from and to CP<->RAM in atomic unit called<br>
      the CPU cacheline). (unit is byte not bit)
    </td>
  </tr>

  <tr>
    <td>grep &lt;option&gt;</td>
    <td>
      <b>Options: </b>
      <ul>
        <li><b>-v: </b>In grep, the -v (or --invert-match) flag is used to invert the search.<br>
          Instead of showing lines that match a pattern, it excludes them and displays only the<br>
          lines that do not contain the specified string.
        </li>
        <li><b>-n: </b>the -n (or --line-number) flag prefixes each matching line with its 1-based<br>
          line number from the input file.
        </li>
        <li><b>-w: </b>the <b>-w (or --word-regexp)</b> flag forces the search to match the whole<br>
          word only.
        </li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>grub2-mkconfig</td>
    <td><b>grub2-mkconfig</b> is the actual command-line tool that generates the final grub.cfg<br>
      file.
    </td>
  </tr>
  
  <tr>
    <td>head Makefile</td>
    <td>To know kernel version. (Check top-level Makefile)</td>
  </tr>
  
  <tr>
    <td>insmod</td>
    <td>Insert module. It loads a kernel module (.ko file) directly into the running kernel. </td>
  </tr>

  <tr>
    <td>ls -R /boot/efi</td>
    <td>ISafely view /boot/efi files.</td>
  </tr>
  
  <tr>
    <td>lsmod</td>
    <td><b>List all currently loaded kernel modules.</b><br>
      Each line has 3 parts:
      <ul>
        <li> Module name:  Name of the kernel module</li>
        <li>Size: Module size in bytes</li>
        <li>Usage Count</li>
        <li>Used by: How many other modules depend on it</li>
    </td>
  </tr>

  <tr>
    <td>lspci</td>
    <td>lspci is a Linux command that <b>lists all PCI and PCI‑Express devices</b> on your system.<br>
      PCI devices include:<br>
      <ul>
        <li>Network cards (e.g., e1000e, igb, ixgbe)</li>
        <li>Storage controllers (NVMe, SATA)</li>
        <li>GPUs</li>
        <li>USB controllers</li>
        <li>Audio devices</li>
        <li>Bridges, root ports, PCI switches</li>
      </ul><br>
      <mark><b>Options: </b></mark><br>
      <ol>
        <li><b>-vv: </b>Show detailed information.</li>
        <li><b>-k: </b>Show which kernel driver is attached.</li>
        <li><b>-nn: </b>Show device class + vendor names</li>
      </ol>
    </td>
  </tr>

  <tr>
    <td>lstop</td>
    <td>Visualizes NUMA hierarchy.</td>
  </tr>

  <tr>
    <td>man -k grub</td>
    <td>Keywords of GRUB</td>
  </tr>

  <tr>
    <td>make defconfig</td>
    <td><b>Default Kernel Configuration.</b><br>
      It generates a standard, safe, general-purpose configuration.
      <ul>
        <li> Boots on nearly all systems</li>
        <li>Enables commonly used filesystems (ext4, btrfs, FAT, etc.)</li>
        <li>Enables basic networking, USB, PCI, etc.</li>
        <li>Includes many drivers → so build is still large</li>
        <li>Does not include all the modules your Ubuntu kernel has</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>make distclean</td>
    <td>mrproper + remove editor backup and patch files. run this cmd in<br>
      the root of the kernel source tree, useful when you want to restart<br>
      the kernel build procedure from scratch. 
    </td>
  </tr>
  
  <tr>
    <td>make help</td>
    <td>to see make command option details</td>
  </tr>

  <tr>
    <td>make -j8</td>
    <td>implifying up to eight processes performing the build in parallel. All the<br>
      build processes write to the same stdout location - the console or terminal<br>
      window. Hence, the output may be out of order or mixed up.
    </td>
  </tr>

  <tr>
    <td>make localmodconfig</td>
    <td>It reads currently loaded kernel modules from /proc/modules,<br>
      hardware info from /sys, /proc, lsmod and creates a new .config file.
      <ul>
        <li> It keeps only the kernel features your system actually uses.</li>
        <li> Removes thousands of unused drivers.</li>
        <li> Makes kernel compilation 5-10 x faster.</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>make menuconfig</td>
    <td><b>UI to fine-tune kernel configuration.</b>
      <ul>
        <li><b><mark>[*]: </mark></b>On, feature compiled and built in to the<br>
          kernel image. (y)
        </li>
        <li><b><mark>[ ]: </mark></b>Off, not built at all (n).</li>
        <li><b><mark>&lt;*&gt;: </mark></b>One feature compiled and built in<br>
          the kernel module (y).
        </li>
        <li><b><mark>&lt;M&gt;: </mark></b> Module, feature compiled and built as<br>
          a kernel module (an LKM) (m)
        </li>
        <li><b><mark>&lt;&gt;: </mark></b> Off, not built at all (n)</li>
        <li><b><mark>{ . }: </mark></b>A dependency exists for this config option;<br>
          hence, it's required to be built or compiled as either a module (m) or to<br>
          the kernel image (y).
        </li>
        <li><b><mark> -*- : </mark></b>A dependency requires this item to be compiled<br>
          in (y).
        </li>
        <li><b><mark>( … ): </mark>Prompt: </b>an alphanumeric input is required.<br>
          Press the Enter key while on this option and a prompt box appears.
        </li>
        <li><b><mark>&lt;Menu name&gt  ---></mark></b> A sub-menu follows. Press Enter<br>
          on this item to naqvigate to the sub-menu. 
    </td>
  </tr>

  <tr>
    <td>make modules</td>
    <td>Compile .ko (kernel object) file </td>
  </tr>

  <tr>
    <td>make modules_install</td>
    <td>Getting the kernel modules installed. Sudo is not required if INSTALL_MOD_PATH refers<br>
      a location that does not require root for writing.
    </td>
  </tr>

  <tr>
    <td>make oldconfig</td>
    <td>Update current config utilizing a provided .config as base</td>
  </tr>
  
  <tr>
    <td>modinfo -p &lt;module_name&gt;</td>
    <td>
      <ul>
        <li>Shows parameters for a loadable module.</li>
        <li>Shows parameter names and types.</li>
      </ul>
    </td>
  </tr>
  <tr>
    <td>mknod</td>
    <td>mknod is a command used to <b>create special files</b> in Linux/Unix, such as:
      <ul>
        <li><b>Character device files</b> (e.g., /dev/null, /dev/zero, /dev/tty)</li>
        <li><b>Block device files</b>(e.g., /dev/sda, /dev/loop0)</li>
        <li><b>Named pipes (FIFOs)</b></li><br>
      </ul>
      These special files are usually found in <b>/dev</b>.<br>
      <mark><b>mknod NAME TYPE MAJOR MINOR</b></mark><br>where:<br>
      <ul>
        <li><b>NAME: </b>name of the device file.</li>
        <li><b>TYPE: </b>One of: </li>
        <ul>
          <li><b>c or u: </b> character device.</li>
          <li><b>b: </b>block device</li>
          <li><b>p: </b>FIFO (pipe)</li>
        </ul>
        <li><b>MAJOR: </b>major number of the device.</li>
        <li><b>MINOR: </b> minor numberof the device.</li>
      </ul>  
    </td>
  </tr>
  <tr>
    <td>mkfs</td>
    <td><b>make filesystem</b><br>
      mkfs is a <b>Linux command used to create (format) a filesystem</b> on a block device — <br>
      for example, a partition like /dev/sdb1.<b><mark>Because it destroys all data on the target<br>
      device, it must be used carefully.</mark></b>
    </td>
  </tr>

  <tr>
    <td>ps -A</td>
    <td>Lists all processes currently running on the system.</td>
  </tr>

  <tr>
    <td>ps -el</td>
    <td>List of the processes and their respective nice values (under the column marked NI).</td>
  </tr>

   <tr>
    <td>ps -eo state,uid,pid,ppid,rtprio,time,comm</td>
    <td>List of the processes and their respective real-time priority (under the column marked RTPRIO).<br>
      A value of "-" means the process is not real-time.
    </td>
  </tr>
  
  <tr>
    <td>ps -LA</td>
    <td>shows all threads of all processes on the system.</td>
  </tr>

  <tr>
    <td>ps aux</td>
    <td>shows a detailed snapshot of all running processes using BSD-style (Berkeley<br>
      Software Distribution) options.
      <ul>
        <li><b>a → </b>processes from all users</li>
        <li><b>u → </b>user-oriented format
        <li><b>x → </b>include processes without a controlling TTY (daemons)</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>pstree</td>
    <td>pstree is a classic tool that shows your running processes as a tree structure.<br>
      It’s much easier to read than ps when you want to see which process started (parented) another. 
    </td>
  </tr>

  <tr>
    <td>readelf -S &lt;module_name&gt; | grep ksym</td>
    <td>__ksymtab/__ksymtab_gpl section of ELF. Exported symbol of module is present in this section.</td>
  </tr>
  
  <tr>
    <td>rmmod</td>
    <td>Remove Module</td>
  </tr>

  <tr>
    <td>sed '1d'<br>sed '2d'</td>
    <td>Delete 1st line.<br>Delete 2nd line.</td>
  </tr>

  <tr>
    <td>systemctl isolate graphical.target</td>
    <td>systemctl isolate graphical.target is the command you use to tell Ubuntu to immediately start<br>
      the full desktop environment (GUI).<br>
      <b>What happens when you run this?</b>
      <ol>
        <li><b>Starts the GUI: </b>It launches your display manager (like <b>GDM, SDDM,</b><br>
          or <b>LightDM).</b>
        </li>
        <li><b>Loads User Services: </b>It starts all the background services needed for a<br>
          desktop, such as networking tools, Bluetooth, and sound servers (PulseAudio/Pipewire).
        </li>
        <li><b>Closes Minimal Shells: </b>If you were in a restricted mode (like multi-user.target<br>
          or text-only mode), it will "isolate" the graphical requirements and bring you to the login screen. 
        </li>
      </ol>
      <b>Common Use Cases:</b>
      <ul>
        <li><b>Recovering from Maintenance: </b>If you booted into Emergency Mode or Rescue Mode<br>
          to fix a kernel bug and now you want to go back to the normal desktop without rebooting,<br>
          this is the command to use.
        </li>
        <li><b>Testing Graphics Drivers: </b>If you just installed a new driver for your 6.8 kernel<br>
          and want to see if it actually loads the GUI successfully.
        </li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>time &lt;cmd_name&gt;</td>
    <td>To see how long a command takes to execute.</td>
  </tr>

  <tr>
    <td>ulimit</td>
    <td>view and set resource limits. <b>-f option</b> to query the maximum possible size of<br>
      files written to by the shell process. unlimited only implies that there is no<br>
      particular limit imposed by the OS. Of course it's finite, limited by the actual<br>
      available disk space on the box.
    </td>
  </tr>

  <tr>
    <td>uname &lt;option&gt;</td>
    <td>
      <li><b>-r: </b>shows the current running kernel version.</li>
      <li><b>-a: </b>Shows All system info</li>
      <li><b>-s: </b>Kernel name</li>
      <li><b>-v: </b>Kernel build version</li>
      <li><b>-m: </b>Machine architecture (x86_64, arm64, etc.)</li>
      <li><b>-p: </b>Processor type</li>
      <li><b>-o: </b>Operating system</li>
    </td>
  </tr>

  <tr>
    <td>vmstat -m</td>
    <td>Slab cache detail (vmstat --> Report virtual memory statistics).</td>
  </tr>

  <tr>
    <td>wc -l</td>
    <td>counts the number of lines in input.</td>
  </tr>
  
</table>

<h3><mark>C Specifier: <br>=========</mark></h3>
<table border="1">
  <th>Type</th>
  <th>Specifier</th>
  
  <tr>
    <td>size_t</td>
    <td>%zu</td>
  </tr>

  <tr>
    <td>ssize_t</td>
    <td>%zd</td>
  </tr>

  <tr>
    <td>Kernel pointer for security (hashed value</td>
    <td>%pk</td>
  </tr>

  <tr>
    <td>Actual pointer (don't use in production)</td>
    <td>%px</td>
  </tr>

  <tr>
    <td>Physical Address (kptr_restrict)</td>
    <td>%pa</td>
  </tr>
  
  <tr>
    <td>Raw buffer as a string of hex characters</td>
    <td><b>%*ph</b> (* is replaced by the number of characters). Use it for buffer within 64 chars,<br>
      and use the print_hex_dump_bytes() routine for more.
    </td>
  </tr>

  <tr>
    <td>IPv4 address</td>
    <td>%pI4</td>
  </tr>

  <tr>
    <td>IPv6 address</td>
    <td>%pI6</td>
  </tr>
  
</table>

<h3><b><mark>printk log level: <br>=============</mark></b></h3>
<table border="1">
  <th>log level</th>
  <th>Value</th>
  
  <tr>
    <td>KERN_EMERG: </td>
    <td>0</td>
  </tr>

  <tr>
    <td>KERN_ALERT: </td>
    <td>1</td>
  </tr>

  <tr>
    <td>KERN_CRIT: </td>
    <td>2</td>
  </tr>

  <tr>
    <td>KERN_ERR: </td>
    <td>3</td>
  </tr>

  <tr>
    <td>KERN_WARNING: </td>
    <td>4</td>
  </tr>

  <tr>
    <td>KERN_NOTICE: </td>
    <td>5</td>
  </tr>

  <tr>
    <td>KERN_INFO: </td>
    <td>6</td>
  </tr>

  <tr>
    <td>KERN_DEBUG: </td>
    <td>7</td>
  </tr>
  
</table>

<h3><mark>Error Meaning:<br>==========</mark></h3>
<table border="1">
  <th>Error</th>
  <th>Meaning</th>

  <tr>
    <td>ESRCH</td>
    <td>Error - No Such Process</td>
  </tr>
  
  <tr>
    <td>EINVAL</td>
    <td>Invalid Argument</td>
  </tr>

  <tr>
    <td>ERESTARTSYS</td>
    <td><b>-ERESTARTSYS</b> is a specialized error code used to handle interruptions<br>
      caused by signals during a blocking system call. It is primarily used in <br>
      conjunction with interruptible sleeps (such as mutex_lock_interruptible or<br>
      wait_event_interruptible).
    </td>
  </tr>

  <tr>
    <td>EINTR</td>
    <td><b>EINTR (Error code 4)</b> stands for <b>Interrupted System Call.</b></td>
  </tr>

  <tr>
    <td>EPERM</td>
    <td><b>EPERM (Error code 1) </b>stands <b>for Operation Not Permitted.</b></td>
  </tr>
</table>

<h3><mark><b>Signals: <br>==========</b></mark></h3>
<table border="1">
  <th>Signal</th>
  <th>Description</th>

  <tr>
    <td>PF_EXITING</td>
    <td></td>
  </tr>
  
  <tr>
    <td>SIGCHLD</td>
    <td><b>SIGCHLD (Signal: Child): </b> is the notification the kernel sends to a parent<br>
      process whenever one of its child processes terminates, stops, or continues.
    </td>
  </tr>
  
  <tr>
    <td>SIGSTOP</td>
    <td><b>SIGSTOP</b> is the "hard pause" button for a process. SIGSTOP cannot be ignored,<br>
      blocked, or handled by the process. When the kernel sends this signal, the process stops<br>
      exactly where it is immediately.
    </td>
  </tr>

  <tr>
    <td>SIGTTIN</td>
    <td><b>SIGTTIN (Signal Terminal Input): </b> is the signal sent to a background process when<br>
      it attempts to read from its controlling terminal (keyboard).
    </td>
  </tr>
  
  <tr>
    <td>SIGTTOU</td>
    <td><b>Signal: Terminal Output.</b> This is the signal sent to a background process<br>
      when it tries to write data to its controlling terminal (tty).
    </td>
  </tr>
  
</table>

<h3><mark><b>Abbreviation: <br>===========</b></mark></h3>
<table border="1">
  <tr>
    <th>Abbreviation</th>
    <th>Full Form</th>
    <th>Description</th>
  </tr>

  <tr>
   <td>.ko</td>
   <td>Kernel object</td>
   <td>Give us kernel functionality in a modular manner.</td>
  </tr>

  <tr>
   <td>ABI</td>
   <td>Application Binary Interface</td>
   <td>ABI refers to the low-level interface between the kernel and other software (either<br>
     user-space applications or kernel modules). Unlike the <b>API (Application Programming</b><br>
     Interface)</b>, which is defined at the source code level, the <b>ABI</b> is defined<br>
     at the binary level (registers, memory layouts, and stack conventions). Unlike the<br>
     user-space interface, the <b>internal kernel ABI is unstable</b>.<br>
    <ul>
      <li><b>No Stability Guarantee: </b>There is no stable ABI for kernel modules. If you<br>
        compile a driver for kernel v6.12, it will likely fail to load on v6.13 because<br>
        internal data structures (like struct task_struct) frequently change their internal<br>
        offsets.
      </li>
      <li><b>Version Binding: </b>This is why kernel modules must be recompiled for every<br>
        specific kernel version. The vermagic string in a .ko file ensures the module's<br>
        ABI matches the running kernel exactly.
      </li>
    </ul>
   </td>
  </tr>

  <tr>
   <td>ASAN</td>
   <td>Address SANitizer</td>
   <td></td>
  </tr>
  
  <tr>
   <td>ASLR</td>
   <td>Adress Space Layout Randomization</td>
   <td></td>
  </tr>
  
  <tr>
   <td>BCC</td>
   <td>BPF Compiler Collection</td>
   <td>It is a <b>toolkit and framework for creating eBPF programs</b> used to trace,<br>
     profile,and observe Linux systems <b>at runtime with very low overhead.</b> <br>
     It’s widely used for performance analysis, debugging, networking, and security.
   </td>
  </tr>

  <tr>
   <td>BDI</td>
   <td>Backing Device Info</td>
   <td>It is a core data structure (struct backing_dev_info) that represents the<br>
     properties and state of a storage device (the "backing store") that sits<br>
     underneath a filesystem.
   </td>
  </tr>
  
  <tr>
   <td>BIOS</td>
   <td>Basic Input Output System</td>
   <td></td>
  </tr>

  <tr>
   <td>BKL</td>
   <td>Big Kernel Lock</td>
   <td>When held, it kept the kernel in a non-preemptible state for long period<br>
     of time. Now has been removed.
   </td>
  </tr>
  
  <tr>
   <td>BoF</td>
   <td>Buffer Overflow</td>
   <td></td>
  </tr>

  <tr>
    <td>BSA</td>
    <td>Buddy System Allocator</td>
    <td></td>
  </tr>
  
  <tr>
   <td>BSP</td>
   <td>Board Support Package</td>
   <td>Support files for hardware/SoC</td>
  </tr>

  <tr>
   <td>CFS</td>
   <td>Completely Fair Scheduler</td>
   <td></td>
  </tr>

  <tr>
   <td>cgroup</td>
   <td>Control groups</td>
   <td></td>
  </tr>

  <tr>
    <td>CISC</td>
    <td>Complex Instruction Set Computing</td>
    <td></td>
  </tr>

  <tr>
    <td>CMA</td>
    <td>Contiguous Memory Allocator</td>
    <td></td>
  </tr>

  <tr>
    <td>cmpxchg</td>
    <td>Compare and Exchange</td>
    <td><b>cmpxchg (Compare and Exchange)</b> is an atomic instruction provided<br>
      by the CPU hardware.
      <ol>
        <li>
          <b>Compare: </b>It compares the value at a specific memory address with<br>
          a "target value" (what you expect the value to be).
        </li>
        <li><b>Match: </b>If the values are equal, it writes a "new value" into that<br>
          memory address.
        <li><b>Fail: </b>If the values are not equal (meaning another core changed<br>
          it first), the write is aborted, and the current value at that address is<br>
          returned so the caller<br> can try again. 
        </li>
      </ol><br>
      <b><mark>bool cmpxchg(int *address, int expected, int new_value) {<br>
        &nbsp;&nbsp;if (*address == expected) {<br>
          &nbsp;*address = new_value;<br>
          &nbsp;return true; // Success!<br>
        }<br>
        return false; // Someone else changed it<br>
      }<br></mark></b>
    </td>
  </tr>

  <tr>
   <td>CPIO</td>
   <td>Copy In, Copy Out</td>
   <td>CPIO is a simple archive file format used widely in Linux systems—especially for<br>
     initramfs / initrd, embedded systems, and packaging files for the kernel. 
      <ul>A .cpio file contains:
        <li>File metadata (permissions, uid, gid)</li>
        <li>Directory structure</li>
        <li>File contents</li>
        <li>Optional compression (gzip, xz, lzma)</li>
      </ul>
   </td>
  </tr>

  <tr>
   <td>CONFIG_MODULE_SIG</td>
   <td>Module Signature Verification</td>
    <td><b><mark>CONFIG_MODULE_SIG </mark></b>is a kernel build-time option that controls<br>
      module signature verification — i.e., whether the kernel requires .ko modules to be<br>
      cryptographically signed before<br> loading.
      <b><mark>CONFIG_MODULE_SIG_ALL </mark></b>Sign all modules automatically during<br>
      kernel build. 
      <b><mark>CONFIG_MODULE_SIG_FORCE </mark></b>Kernel refuses to load unsigned modules.
   </td>
  </tr>

  <tr>
   <td>cpuhp</td>
   <td>CCPU Hotplug</td>
   <td>It manage the state transitions (online/offline) for each specific CPU core.</td>
  </tr>
  
  <tr>
   <td>CR3</td>
   <td>Control Register 3</td>
   <td>CR3 is the control register that holds the physical address of the top-level page<br>
     table (PGD/PML4)<br> on x86/x86-64. <b>CR3</b> is the <b>x86/x86-64 equivalent of<br>
     ARM64’s TTBR0/TTBR1.</b>
    </td>
  </tr>

  <tr>
   <td>CTF</td>
   <td>Common Vulnerabilities and Exposures</td>
   <td>A <b>CVE</b> is a standardized identifier for a publicly disclosed security flaw.</td>
  </tr>

  <tr>
   <td>CVE</td>
   <td>Common Trace Format</td>
   <td></td>
  </tr>

  <tr>
   <td>CWE</td>
   <td>Common Weakness and Enumeration</td>
   <td>While <b>CVE (Common Vulnerabilities and Exposures)</b> identifies a specific<br>
     security flaw<br> in a program (like a specific bug in kernel 6.17),<br>
     <b>CWE (Common Weakness Enumeration)</b> identifies the type or root cause of that<br>
     weakness.
   </td>
  </tr>

  <tr>
   <td>DAMON</td>
   <td>Data Access MONitor</td>
   <td>Capture and analyse memory access patterns of user-space process.</td>
  </tr>

  <tr>
   <td>dd</td>
   <td>Disc duplicator</td>
   <td></td>
  </tr>

  <tr>
   <td>debugfs</td>
   <td>Debug File System</td>
   <td></td>
  </tr>

  <tr>
   <td>defconfig</td>
   <td>Default Kernel Configuration</td>
   <td></td>
  </tr>

  <tr>
   <td>dentry</td>
   <td>Directory entry</td>
   <td>It is a core Virtual File System (VFS) structure that represents a specific<br>
     component in a file path. 
     <ul>
       <li>d_name: The actual name of the file or directory.</li>
       <li>d_inode: A pointer to the inode associated with this name.</li>
       <li>d_parent: A pointer to the dentry of the parent directory.</li>
       <li>d_op: A pointer to dentry_operations (methods like d_revalidate or d_delete).</li>
     </ul>
   </td>
  </tr>

  <tr>
   <td>DKMS</td>
   <td>Dynamic Kernel Module Support</td>
   <td>Framework for module auto-loading.</td>
  </tr>

  <tr>
   <td>dm-verity</td>
   <td>Device-Mapped-Verity</td>
   <td>A kernel feature that ensures the integrity of read-only partitions like /system<br>
     and /vendor.</td>
  </tr>

  <tr>
   <td>DSO</td>
   <td>Dynamic Shared Object</td>
   <td></td>
  </tr>
  
  <tr>
   <td>DSP</td>
   <td>Digital Signal Processor</td>
   <td>Special processor for signal ops</td>
  </tr>

  <tr>
   <td>DTB</td>
   <td>Device Tree Blob</td>
   <td>Binary hardware description</td>
  </tr>

  <tr>
   <td>DTS</td>
   <td>Device Tree Source</td>
   <td>Source format of DTB</td>
  </tr>

  <tr>
   <td>eBPF</td>
   <td>Extended Berkeley Packet Filter</td>
   <td><b>in-kernel programmable VM </b>that lets you run user-defined programs inside<br>
     the Linux kernel without loading kernelmodules. It’s widely used for <b>observability,<br>
     networking, and security.</b>
   </td>
  </tr>

  <tr>
    <td>ELF</td>
    <td>Executable and Linkable Format</td>
    <td></td>
  </tr>

  <tr>
    <td>Epoll</td>
    <td>Event Poll</td>
    <td><b>epoll (Event Poll)</b> is a scalable Linux-specific I/O event notification<br>
      mechanism used to monitor multiple file descriptors (FDs) to see if I/O is possible<br>
      on any of them. 
    </td>
  </tr>

  <tr>
    <td>EUID</td>
    <td>Effective User ID</td>
    <td>Who the kernel trusts for access control.</td>
  </tr>

  <tr>
    <td>EXPORT_SYMBOL</td>
    <td></td>
    <td>By default all symbols (static/global) are private to the kernel modules. Using<br>
      EXPORT_SYMBOL we can make it global, visible to any and all other kernel modules.
    </td>
  </tr>

  <tr>
    <td>ext2</td>
    <td>Second Extended File System</td>
    <td>It does not keep a log of intended changes.<br>
      <ul>
        <li>Faster but riskier.</li>
        <li>Doesn't write journal constantly, so takes less storage.</li>
        <li>Stable and low overhead.</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>ext3</td>
    <td>Third Extended File System</td>
    <td>It records changes in a dedicated area (the "journal") before they are permanently<br>
      applied to the main file system. </td>
  </tr>

  <tr>
    <td>f2fs</td>
    <td>Fast flash file system</td>
    <td></td>
  </tr>

  <tr>
    <td>FIQ</td>
    <td>Fast Interrupt Request</td>
    <td><b>FIQ (Fast Interrupt Request)</b> is a legacy hardware-level interrupt specific<br>
      to the <b>ARM (32-bit)</b> architecture. It was designed to provide a higher-priority,<br>
      lower-latency alternative to the standard IRQ.
    </td>
  </tr>

  <tr>
    <td>FPU</td>
    <td>Floating Point Unit</td>
    <td></td>
  </tr>

  <tr>
    <td>FSUID</td>
    <td>File System User ID</td>
    <td>File-System specific checks.</td>
  </tr>

  <tr>
    <td>GFP</td>
    <td>Get Free Page</td>
    <td></td>
  </tr>  

  <tr>
    <td>GIC</td>
    <td>Generic Interrupt Controller</td>
    <td>On ARM</td>
  </tr>
  
  <tr>
    <td>GKI</td>
    <td>General Kernel Image</td>
    <td>GKI provides a generic, common Linux kernel image that works across many Android<br>
      devices without vendors heavily modifying the core kernel.</td>
  </tr>

  <tr>
    <td>GPL</td>
    <td>General Public License</td>
    <td>If code is upstream into the mainline kernel, it must be under the GNU GPL-2.0<br>
      license.
    </td>
  </tr>

  <tr>
    <td>GPOS</td>
    <td>General Purpose Operating System</td>
    <td></td>
  </tr>
  
  <tr>
    <td>GRUB</td>
    <td>Grand Unified Bootloader</td>
    <td>
      <ul>
        <li>Default bootloader for x86 or x86_64</li>
        <li>GRUB (Grand Unified Bootloader) is the software that loads right after your<br>
          UEFI/BIOS finishes its checks. It’s the menu you see (or that stays hidden) that<br>
          actually starts the Linux kernel.</li><br>
      <b>How GRUB works on your system: </b>
      <ol>
        <li>UEFI looks at the EFI System Partition (/dev/nvme0n1p1).</li>
        <li>It runs the GRUB binary (usually grubx64.efi).</li>
        <li>GRUB reads its configuration from your /boot partition (/dev/nvme0n1p2).</li>
        <li>It loads the Kernel and Initrd into memory and starts Ubuntu.</li>
      </ol>
      <b>Key GRUB Files on your Ubuntu: </b>
      <ul>
        <li><b><mark>/boot/grub/grub.cfg: </mark></b>The "master" config file. Do not edit<br>
          this manually; it’s automatically generated.</li>
        <li><b><mark>/etc/default/grub: </mark></b>This is where you make changes (like<br>
          changing the timeout or adding "nomodeset").</li>
        <li><b><mark>/etc/grub.d/: </mark></b>A folder of scripts used to build the final config.</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>HAL</td>
    <td>Hardware Abstraction Layer</td>
    <td>Layer between hw and OS</td>
  </tr>

  <tr>
    <td>HID</td>
    <td>Human Interface Device</td>
    <td></td>
  </tr>

  <tr>
    <td>HRT</td>
    <td>High-resolution timers</td>
    <td>It is the interrupt source for the kernel's high-precision timing subsystem, which<br>
      allows for microsecond-level (or even nanosecond-level) accuracy, far exceeding the <br>
      old "jiffies" system.
    </td>
  </tr>
  
  <tr>
    <td>I2C</td>
    <td>Inter-Integrated Circuit</td>
    <td></td>
  </tr>
  
  <tr>
    <td>IDR</td>
    <td>Integer ID Management</td>
    <td>The <b>IDR (Integer ID Management)</b> is a library used to map small integer<br>
      identifiers (IDs)to pointer-based data structures. It solves the problem of <br>
      efficiently allocating, managing, and looking up unique IDs—such as file <br>
      descriptors, process IDs (PIDs),or device instance  numbers—without the high <br>
      memory overhead of a large array or the slow lookup times of a linked list.
    </td>
  </tr>
  
  <tr>
    <td>initramfs</td>
    <td>Initial RAM filesystem</td>
    <td>initramfs (Initial RAM Filesystem) is a tiny, temporary root filesystem that<br>
      loads into your RAM right after GRUB but before your actual Ubuntu system starts.<br>
      Think of it as the "bridge" that helps the kernel find and mount your real hard drive.<br>
      <b>Why you need it (especially with your setup)</b><br>
      <ul>
        <li><b>NVMe: </b>The kernel needs a driver to talk to your NVMe SSD.</li>
        <li><b>LVM: </b>Your root partition (/) is hidden inside a Logical Volume.</li>
        <li><b>Kernel's Problem: </b>The kernel alone doesn't know how to "unlock" an<br>
          LVM volume or talk to every possible SSD brand.
        <li><b>The Solution: </b>GRUB loads the initramfs file (found in <br>
          /boot/initrd.img-...). This file contains the basic drivers (modules) and scripts<br>
          needed to activate your LVM and mount the real / filesystem.</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>inode</td>
    <td>Index node</td>
    <td>Contains file metadata such as access permissions, size, owner, creation time etc.<br>
      The inode object represents all the information needed by the kernel to manipulate<br>
      a file or directory.<br>
      <b>An inode is created</b> in two distinct scenarios:<br>
      <b>physically on the disk</b> and <b>logically in the kernel's memory.</b>
      <ol>
        <li><b><mark>Physical Creation (On-Disk):</mark></b><br></li><br>
          A new inode is allocated on the storage medium whenever a new file system<br>
          object is created.<br>
          This happens during: 
          <ul>
            <li><b>File/Directory Creation: </b>When you run mkdir, touch, or use<br>
              the open() system call with the O_CREAT flag.
            </li>
            <li><b>System Calls: </b>The VFS calls the specific filesystem method<br>
              (like ext3_mkdir or ext4_create).
            </li>
            <li><b>Mechanism: </b>The kernel looks at the Superblock to find a free bit<br>
              in the Inode Bitmap, marks it as used, and initializes the inode structure<br>
              in the disk's inode table.
            </li>
          </ul>
        <li><b><mark>In-Memory Creation (VFS Objects): </mark></b></li><br>
          Even if a file already exists on disk, a "virtual" inode object must be created<br>
          in RAM so the OS can work with it. This happens during:<br>
          <ul>
            <li><b>Path Lookup: </b>When you access a file (e.g., cat /etc/passwd),<br>
              the kernel finds the inode number on disk and calls alloc_inode to create<br>
              a matching struct inode in the kernel's memory.
            </li>
            <li><b>Mounting: </b>The root inode of a partition is created in memory as soon<br>
              as the device is mounted.
            </li>
          </ul>
      </ol>
    </td>
  </tr>

  <tr>
    <td>[IO][A]PIC</td>
    <td>IO-[Advanced] Programmable Interrupt Controller</td>
    <td>IO-APIC on x86</td>
  </tr>

  <tr>
    <td>IOCTL</td>
    <td>Input-Output Control</td>
    <td>The ioctl system call is used to issue commands to the device (via its driver).</td>
  </tr>

  <tr>
    <td>IoF</td>
    <td>Integer Overflow</td>
    <td></td>
  </tr>

  <tr>
    <td>IRQ</td>
    <td>Interrupt ReQuest</td>
    <td><b>IRQ (Interrupt Request)</b> is a signal sent by hardware to the CPU to indicate that<br>
      an event requires immediate attention. It allows the processor to stop its current task,<br>
      handle the hardware event, and then resume.
    </td>
  </tr>

  <tr>
    <td>ISR</td>
    <td>Interrupt Service Routine</td>
    <td></td>
  </tr>

  <tr>
    <td>IWI</td>
    <td>Inter-Work Interrupt</td>
    <td>It is primarily used on <b>ARM64</b> and some <b>RISC-V</b> systems to signal a CPU core<br>
      that a new task has been added to its local <b>Workqueue.</b>
    </td>
  </tr>

  <tr>
    <td>KASAN</td>
    <td>Kernel Address SANitizer</td>
    <td>It is a dynamic memory error detector used primarily to find out-of-bounds(buffer <br>
      overflow/underflow), use-after-free bug and double-free access.
    </td>
  </tr>

  <tr>
    <td>KASLR</td>
    <td>Kernel ASLR</td>
    <td></td>
  </tr>

  <tr>
    <td>KCSAN</td>
    <td>Kernel Concurrency SANitizer</td>
    <td></td>
  </tr>

  <tr>
    <td>Kbuild</td>
    <td>System for selecting kernel features</td>
    <td>Kernel Build System</td>
  </tr>
  
  <tr>
    <td>Kconfig</td>
    <td>Kernel Configuration</td>
    <td>System for selecting kernel features</td>
  </tr>

  <tr>
    <td>KMSAN</td>
    <td>Kernel Memory Sanitizer</td>
    <td></td>
  </tr>

  <tr>
    <td>kprobe</td>
    <td>Kernel probe</td>
    <td></td>
  </tr>

  <tr>
    <td>kretprobe</td>
    <td>Kernel probe return</td>
    <td></td>
  </tr>

  <tr>
    <td>KSE</td>
    <td>Kernel Schedulable Entity</td>
    <td>In linux, the KSE is a thread, not a process.</td>
  </tr>

  <tr>
    <td>LANANA</td>
    <td>Linux Assigned Names And Numbers Authority</td>
    <td>Only these folks can officially assign the device node - the type and the major:minor<br>
      numbers - to devices.</td>
  </tr>

  <tr>
    <td>LDM</td>
    <td>Linux Device Model</td>
    <td></td>
  </tr>

  <tr>
    <td>LKM</td>
    <td>Loadable Kernel Module</td>
    <td>Kernel code loaded/unloaded at runtime.</td>
  </tr>

  <tr>
    <td>LLC</td>
    <td>Last Level Cache</td>
    <td></td>
  </tr>

  <tr>
    <td>loff_t</td>
    <td>Long Offset Type</td>
    <td>loff_t is a signed 64-bit integer used to represent file positions and offsets.</td>
  </tr>

  <tr>
    <td>LPA</td>
    <td>Large Physical Address</td>
    <td></td>
  </tr>

  <tr>
    <td>LTTng</td>
    <td>Linux Trace Toolkit- next generation</td>
    <td>Powerful and popular open-source tracing system for Linux Kernel.</td>
  </tr>
  
  <tr>
    <td>MAC</td>
    <td>Mandatory Access Control</td>
    <td></td>
  </tr>

  <tr>
    <td>MBR</td>
    <td>Master Boot Record</td>
    <td>
      The Master Boot Record (MBR) is the first sector of a storage device (Sector 0),<br>
      occupying exactly 512 bytes. It is the legacy standard for partitioning disks, used<br>
      primarily by BIOS-based systems to locate and load an operating system.<br>
      <b><mark>sudo xxd -l 512 /dev/nvme0n1</mark></b><br>
      The output shows a <b>Protective MBR (Master Boot Record).</b><br><br>
      00000000: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000010: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000020: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000030: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000040: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000050: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000060: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000070: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000080: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000090: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      000000a0: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      000000b0: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      000000c0: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      000000d0: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      000000e0: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      000000f0: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000100: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000110: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000120: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000130: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000140: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000150: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000160: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000170: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000180: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      00000190: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      000001a0: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      000001b0: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      000001c0: <b><mark>02</mark></b>00 <b><mark>ee</mark>ff</b> ffff 0100 0000 <br>
                      <b>ffff ff<mark>18</mark></b> 0000  ................<br>
      000001d0: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      000001e0: 0000 0000 0000 0000 0000 0000 0000 0000  ................<br>
      000001f0: 0000 0000 0000 0000 0000 0000 0000 <b>55<mark>aa</mark></b>  ..............U.<br>
      <ul>
        <li><b>000001c0 (Partition Entry): </b>The data starting with 0200 ee... is a single<br>
          dummy partition entry of type 0xEE. This tells old BIOS systems, "This disk is full,<br>
          don't touch it."
        </li>
        <li><b>000001fe (Boot Signature): </b>The 55aa at the very end is the standard<br>
          "magic number" that marks this as a valid bootable sector.<br>
        </li>
      </ul>
      <b>MBR Structure Breakdown:</b><br>
        The 512 bytes are strictly divided into three main components: <br>
        <table>
          <th>Component</th>
          <th>Size</th>
          <th>Offset(Hex)</th>
          <th>Purpose</th>
          <tr>
            <td>Bootstrap Code</td>
            <td>446 bytes</td>
            <td>0x000–0x1BD</td>
            <td>Executable code (bootloader) that finds the active partition and<br>
              starts the OS.
            </td>
          </tr>
          <tr>
            <td>Partition Table</td>
            <td>64 bytes</td>
            <td>0x1BE–0x1FD</td>
            <td>Contains 4 entries (16 bytes each) describing the disk's primary<br>
              partitions.
            </td>
          </tr>
          <tr>
            <td>Boot Signature</td>
            <td>2 bytes</td>
            <td>0x1FE–0x1FF</td>
            <td>The "magic number" 0x55AA, which validates the sector as a bootable<br>
              MBR.
            </td>
          </tr>
        </table>
    </td>
  </tr>

  <tr>
    <td>min_flt</td>
    <td>nnumber of minor page faults</td>
    <td>A <b>minor page fault </b> occurs when:
      <ul>
        <li>The page is <b>already in RAM</b></li>
        <li>But <b>not mapped</b> in the process page table yet</li>
      </ul>
    </td>
  </tr>
  
  <tr>
    <td>MMU</td>
    <td>Memory Management Unit</td>
    <td>Hardware for memory translation</td>
  </tr>

  <tr>
    <td>Mutex</td>
    <td>Mutual Exclusion</td>
    <td></td>
  </tr>

  <tr>
    <td>NAPI</td>
    <td>New API</td>
    <td></td>
  </tr>

  <tr>
    <td>NBD</td>
    <td>Network Block Device</td>
    <td></td>
  </tr>

  <tr>
    <td>NMI</td>
    <td>Non-maskable Interrupt</td>
    <td><b>NMI (Non-Maskable Interrupt)</b> is a high-priority hardware interrupt that<br>
      cannot be ignored or disabled by standard software masking techniques. It is <br>
      reserved for critical events that must be handled immediately, even if the CPU is<br>
      in a state where regular interrupts are disabled. NMI interrupt lines cannot be shared.
    </td>
  </tr>
  
  <tr>
    <td>NUMA</td>
    <td>Non-Uniform Memory Access</td>
    <td></td>
  </tr>

  <tr>
    <td>nvcsw</td>
    <td>number of non-voluntary context switches</td>
    <td>A <b>non-voluntary context switch</b> happens when:
      <ul>
        <li>the kernel forces a task off the CPU</li>
        <li>the task did not explicitly give up the CPU</li>
      </ul>
      In /proc/<pid>/stat, min_flt is field number 10.
    </td>
  </tr>

  <tr>
    <td>OF</td>
    <td>Open Firmware</td>
    <td>Used for device tree bindings</td>
  </tr>

  <tr>
    <td>PA</td>
    <td>Page Allocator</td>
    <td></td>
  </tr>

  <tr>
    <td>PB</td>
    <td>Petabyte</td>
    <td>It’s a <b>unit of digital storage size.</b></td>
  </tr>
  
  <tr>
    <td>PCIe</td>
    <td>PCI Express</td>
    <td></td>
  </tr>

  <tr>
    <td>PFN</td>
    <td>Page Frame Numbers</td>
    <td></td>
  </tr>
 
  <tr>
    <td>PGD</td>
    <td>Page Global Directory</td>
    <td>It is the <b>top-level page table</b> used by the Linux kernel to translate <br>
      <b>virtual addresses → physical addresses.</b></td>
  </tr>
  
  <tr>
    <td>PMD</td>
    <td>Page Middle Directory</td>
    <td>It is the third level in the Linux page table hierarchy (for most modern configs)<br>
      and sits between PUD and PTE.</td>
  </tr>

  <tr>
    <td>PMI</td>
    <td>Performance Monitoring Interrupt</td>
    <td>It is a specialized interrupt generated by the CPU's Performance Monitoring Unit (PMU)<br>
      to signal that a specific hardware counter has overflowed.
    </td>
  </tr>
  
  <tr>
    <td>POST</td>
    <td>Power On Self Test</td>
    <td></td>
  </tr>

  <tr>
    <td>PSS</td>
    <td>Proportional Set Size</td>
    <td>Physical memory used by a process, where shared pages are divided proportionally among<br>
      all sharers.<br>
      <b>Example:</b><br>
      <ul>
        <li>2 processes share a 10 MB library</li>
        <li>Each process gets 5 MB PSS from that library</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>pts</td>
    <td><b>Pseudo-Terminal Slave</b> number 1</td>
    <td>Unlike /dev/tty1 (which represents a physical keyboard and monitor attached to the<br>
      machine), a <b>pts</b> is a "fake" terminal created by software.<br>
      <b>Why are you on a PTS?</b><br>
        You get a pts address whenever you connect to the system via:
      <ul>
        <li>SSH (Remote login)</li>
        <li>Terminal Emulators (Gnome Terminal, xterm, Terminator)</li>
        <li>Multiplexers (Tmux or Screen)</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>PTE</td>
    <td>Page Table Entry</td>
    <td>It is the lowest (leaf) level of the Linux page table hierarchy and directly maps a<br>
      virtual page to a physical page.<br>
      <mark><b>Virtual Address -->  PGD (L0) → PUD (L1) → PMD (L2) → PTE (L3) → <br>
        Physical Page (4 KB).</b></mark>
    </td>
  </tr>

  <tr>
    <td>pty</td>
    <td>Pseudo-terminal</td>
    <td></td>
  </tr>

  <tr>
    <td>PUD</td>
    <td>Page Upper Directory</td>
    <td>It is the second level in the Linux page table hierarchy and sits between PGD<br>
      and PMD.
    </td>
  </tr>

  <tr>
    <td>RCU</td>
    <td>Ready-Copy update</td>
    <td><b>RCU (Read-Copy-Update)</b> is a high-performance synchronization mechanism that<br>
      allows multiple "readers" to access data simultaneously with a "writer.
      <ul>
        <li><b>Read: </b>Readers access data directly. There is zero overhead (no spinning,<br>
          no sleeping).
        </li>
        <li><b>Copy: </b>When a writer wants to change the data, it doesn't modify the<br>
          original. It makes a copy, modifies the copy, and then swaps the pointer to the<br>
          new version.
        </li>
        <li><b>Update: </b>The old data isn't deleted immediately. The kernel waits for<br>
          a Grace Period (until all existing readers are finished) before safely freeing<br>
          the old memory.
        </li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>RISC</td>
    <td>Reduced Instruction Set Computer</td>
    <td></td>
  </tr>

  <tr>
    <td>RMW</td>
    <td>Read-Modify-Write</td>
    <td></td>
  </tr>

  <tr>
    <td>RSS</td>
    <td>Resident Set Size</td>
    <td>The amount of physical RAM currently occupied by a process. RSS counts only pages<br>
      that are resident in RAM, such as:
      <ul>
        <li>Code (text) pages</li>
        <li>Heap</li>
        <li>Stack</li>
        <li>Shared libraries (counted per process)</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>RTC</td>
    <td>Real Time Clock</td>
    <td></td>
  </tr>

  <tr>
    <td>RTL</td>
    <td>Real Time Linux</td>
    <td></td>
  </tr>

  <tr>
    <td>RUID</td>
    <td>Real User ID</td>
    <td>Who started the process.!</td>
  </tr>

  <tr>
    <td>SCL</td>
    <td>Serial Clock</td>
    <td></td>
  </tr>

  <tr>
    <td>SCSI</td>
    <td>Small Computer System Interface</td>
    <td></td>
  </tr>

  <tr>
    <td>SDA</td>
    <td>Serial Data</td>
    <td></td>
  </tr>

  <tr>
    <td>sed</td>
    <td>Simple encrypt decrypt</td>
    <td></td>
  </tr>
  
  <tr>
    <td>SELinux</td>
    <td>Security Enhanced Linux</td>
    <td></td>
  </tr>

  <tr>
    <td>SEV</td>
    <td>Send Event</td>
    <td><b>SEV (Send Event)</b> is the companion instruction to WFE. It acts as a signaling<br>
      mechanism to wake up processor cores that have entered a low-power standby state. When<br>
      a core executes SEV, it causes an event to be signaled to all cores in the <br>
      multiprocessor system (or within a specific sharing domain).
      <ol>
        <li><b>The Signal: </b>It sets a local "event latch" (a hidden internal bit) on every<br>
          core in the cluster.
        </li>
        <li><b>The Wakeup: </b>Any core currently "sleeping" in a WFE (Wait For Event) state<br>
          will see this latch set, wake up, and resume instruction execution.
        </li>
        <li><b>The Latch: </b>If a core is not sleeping when SEV is called, the event latch<br>
          remains set. When that core eventually reaches a WFE instruction, it will see the<br>
          latch is already set and  simply continue running without ever going to sleep (this<br>
          prevents "missing" a signal).
        </li>
      </ol>
    </td>
  </tr>

  <tr>
    <td>SIMD</td>
    <td>Single Instruction, Multiple Data</td>
    <td></td>
  </tr>

  <tr>
    <td>SLOCs</td>
    <td>Source Lines of Code</td>
    <td></td>
  </tr>
  
  <tr>
    <td>SMP</td>
    <td>Symmetric MultiProcessing</td>
    <td>Multiple CPUs sharing memory</td>
  </tr>

  <tr>
    <td>SOH</td>
    <td>Start of Header</td>
    <td></td>
  </tr>

  <tr>
    <td>SPDX</td>
    <td>Software Package Data Exchange</td>
    <td>A shorthand and concise format for expressing the license the code is under. Must<br>
      be 1st line in every source file.<br>
      <b><mark>//SPDX-License-Identifier: GPL-2.0</mark></b>
    </td>
  </tr>

  <tr>
    <td>SUID</td>
    <td>Saved User ID</td>
    <td>For temporarily dropping/regaining privilege.</td>
  </tr>

  <tr>
    <td>SVE</td>
    <td>Scalable Vector Extension</td>
    <td></td>
  </tr>

  <tr>
    <td>systemd</td>
    <td>System Daemon</td>
    <td></td>
  </tr>

  <tr>
    <td>TLB</td>
    <td>Translation Lookaside Buffer</td>
    <td>It’s a <b>CPU hardware cache</b> that speeds up <b>virtual → physical<br>
      address translation.
    </b></td>
  </tr>

  <tr>
    <td>TGID</td>
    <td>Thread Group ID</td>
    <td></td>
  </tr>

  <tr>
    <td>TTBR0</td>
    <td>Translation Table Base Register 0</td>
    <td>It is is an <b>ARM64 CPU register</b> that tells the MMU <b>where the page tables<br>
      for user space start. TTBR0_EL1 </b>holds the physical base address of the page<br>
      tables used for translating user-space virtual addresses.
    </td>
  </tr>

  <tr>
    <td>TTBR1</td>
    <td>Translation Table Base Register 1</td>
    <td>For kernel paging table.</td>
  </tr>

  <tr>
    <td>ttv</td>
    <td>Teletype terminal</td>
    <td></td>
  </tr>

  <tr>
    <td>UAF</td>
    <td>Use After Free</td>
    <td></td>
  </tr>

  <tr>
    <td>UB</td>
    <td>Undefined Behavior</td>
    <td></td>
  </tr>

  <tr>
    <td>UBSAN</td>
    <td>Undefined BehaviorSanatizer</td>
    <td><b>UBSAN (Undefined Behavior Sanitizer)</b> is a runtime debugging tool for<br>
      the Linux kernel that detects <b>Undefined Behavior—actions</b> in C that the<br>
      language standard doesn't define, often leading to unpredictable crashes or<br>
      security flaws.<br>
      <b>What it catches:</b><br>
        It identifies common "silent" bugs that compilers usually ignore:<br>
      <ul>
        <li><b>Integer Overflows: </b>Signed integer addition/subtraction exceeding<br>
          its bit limit.
        </li>
        <li><b>Array Out-of-Bounds: </b>Accessing an index outside the declared<br>
          size of an array.
        </li>
        <li><b>Invalid Shifts: </b>Shifting an integer by more bits than its width<br>
          (e.g., shifting a 32-bit int by 33).
        </li>
        <li><b>Misaligned Pointers: </b>Accessing memory through a pointer that<br>
          isn't aligned with the data type.
        </li>
        <li><b>Null Pointer Dereferences: </b>Using a pointer that points to NULL.</li>
      </ul>
    </td>
  </tr>
 
  <tr>
    <td>UEFI</td>
    <td>Unified Extensible Firmware Interface</td>
    <td>
      <ul>
        <li>UEFI (Unified Extensible Firmware Interface) is the modern replacement<br>
          for the legacy BIOS.
        </li>
        <li>Much more secure, it only allow "signed" operating systems (apps) to be<br>
          booted via it.
        </li>
        <li>It requires a special partition called ESP (EFI System Partition); <br>
          it holds a .efi file that contains the initialization code and data, <br>
          unlike the BIOS, where it's written in firmware (EEPROM chip).
        </li>
        <li>Faster than BIOS.</li>
        <li>It lets you run 32- or 64 bit code.</li>
        <li>Drive size: the BIOS supports only up to 2.2 TB disks, whereas UEFI can<br>
          support disks upto 9 ZB(zettabytes) in size.
        </li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>umh</td>
    <td>User Mode Helper</td>
    <td></td>
  </tr>

  <tr>
    <td>UMR</td>
    <td>Uninitialized Memory Reads</td>
    <td></td>
  </tr>

  <tr>
    <td>UTS</td>
    <td>Unix Timesharing System</td>
    <td>It provides domain name and hostname isolation.</td>
  </tr>

  <tr>
    <td>VDSO</td>
    <td>Virtual Dynamic Shared Object</td>
    <td>
      <ul>
        <li>Provides fast system calls (e.g. gettimeofday, clock_gettime)</li>
        <li>Avoids expensive svc (syscall) transitions</li>
        <li>Architecture-specific </li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>VFS</td>
    <td>Virtual File System</td>
    <td></td>
  </tr>

  <tr>
    <td>wfe</td>
    <td>Wait For Event</td>
    <td><b>WFE (Wait For Event)</b> is a hint instruction used to put a processor<br>
      into a low-power standby state until a specific "event" occurs.
    </td>
  </tr>

  <tr>
    <td>w/w</td>
    <td>Wait/wound</td>
    <td>It is a specialized mutex implementation used to handle <b>deadlock avoidance</b><br>
      when a thread needs to acquire multiple locks at once. W/W mutexes use a Ticket <br>
      (Timestamp) system. Every "transaction" (a set of lock attempts) gets a serial number.
      <ul>
        <li><b>Wait: </b>If a "younger" thread (higher ticket number) hits a lock held <br>
          by an "older" thread, it must wait.
        </li>
        <li><b>Wound: </b>If an "older" thread (lower ticket number) hits a lock held by<br>
          a "younger" thread, it wounds the younger one. The younger thread must drop all<br>
          its locks and start over (back off).
        </li>
      </ul>
    </td>
  </tr>
  
</table>
