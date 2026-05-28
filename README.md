# kernel_prog

<h3>Links: </h3>
<ul>
  <li>https://thelearningjourneyebooks.com/ebooks/TheLinuxKernelDataStructuresJourney_v2.0_April2024.pdf</li>
  <li>https://medium.com/embedworld/maximizing-performance-in-embedded-linux-with-cache-aware-programming-ec3d7ad21e5a</li>
</ul>

<h3>Command: </h3>
<table>
  <tr>
    <th>Command</th>
    <th>Description</th>
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
      mkfs is a <b>Linux command used to create (format) a filesystem</b> on a block device — for example,<br>
      a partition like /dev/sdb1.<b><mark>Because it destroys all data on the target device, it must be used carefully.</mark></b>
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
</table>

<h3>Abbreviation: </h3>
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
   <td>ASLR</td>
   <td>Adress Space Layout Randomization</td>
   <td></td>
  </tr>
  
  <tr>
   <td>BCC</td>
   <td>BPF Compiler Collection</td>
   <td>It is a <b>toolkit and framework for creating eBPF programs</b> used to trace, profile, and observe Linux systems <b>at runtime with very low overhead.</b><br>
      It’s widely used for performance analysis, debugging, networking, and security.
   </td>
  </tr>
  
  <tr>
   <td>BIOS</td>
   <td>Basic Input Output System</td>
   <td></td>
  </tr>
  <tr>
   <td>BoF</td>
   <td>Buffer Overflow</td>
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
   <td>CPIO</td>
   <td>Copy In, Copy Out</td>
   <td>CPIO is a simple archive file format used widely in Linux systems—especially for initramfs / initrd,<br>
      embedded systems, and packaging files for the kernel. 
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
    <td><b><mark>CONFIG_MODULE_SIG </mark></b>is a kernel build-time option that controls module signature verification — i.e.,<br>
      whether the kernel requires .ko modules to be cryptographically signed before loading.<br> 
      <b><mark>CONFIG_MODULE_SIG_ALL </mark></b>Sign all modules automatically during kernel build. 
      <b><mark>CONFIG_MODULE_SIG_FORCE </mark></b>Kernel refuses to load unsigned modules
   </td>
  </tr>
  
  <tr>
   <td>CR3</td>
   <td>Control Register 3</td>
   <td>CR3 is the control register that holds the physical address of the top-level page table (PGD/PML4) on x86/x86-64.<br>
      <b>CR3</b> is the <b>x86/x86-64 equivalent of ARM64’s TTBR0/TTBR1.</b>
    </td>
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
   <td>DKMS</td>
   <td>Dynamic Kernel Module Support</td>
   <td>Framework for module auto-loading.</td>
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
   <td><b>in-kernel programmable VM </b>that lets you run user-defined programs inside the Linux kernel without loading kernelmodules.<br>
      It’s widely used for <b>observability, networking, and security.</b>
   </td>
  </tr>

  <tr>
    <td>ELF</td>
    <td>Executable and Linkable Format</td>
    <td></td>
  </tr>

  <tr>
    <td>EUID</td>
    <td>Effective User ID</td>
    <td>Who the kernel trusts for access control.</td>
  </tr>

  <tr>
    <td>EXPORT_SYMBOL</td>
    <td></td>
    <td>By default all symbols (static/global) are private to the kernel modules. Using EXPORT_SYMBOL we can make it global, visible to any and all other kernel modules.</td>
  </tr>

  <tr>
    <td>f2fs</td>
    <td>Fast flash file system</td>
    <td></td>
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
    <td>GKI</td>
    <td>General Kernel Image</td>
    <td>GKI provides a generic, common Linux kernel image that works across many Android devices without vendors heavily modifying the core kernel.</td>
  </tr>

  <tr>
    <td>GPL</td>
    <td>General Public License</td>
    <td>If code is upstream into the mainline kernel, it must be under the GNU GPL-2.0 license.</td>
  </tr>
  
  <tr>
    <td>GRUB</td>
    <td>Grand Unified Bootloader</td>
    <td>
      <ul>
        <li>Default bootloader for x86 or x86_64</li>
        <li>GRUB (Grand Unified Bootloader) is the software that loads right after your UEFI/BIOS finishes its checks.<br>
          It’s the menu you see (or that stays hidden) that actually starts the Linux kernel.</li><br>
      <b>How GRUB works on your system: </b>
      <ol>
        <li>UEFI looks at the EFI System Partition (/dev/nvme0n1p1).</li>
        <li>It runs the GRUB binary (usually grubx64.efi).</li>
        <li>GRUB reads its configuration from your /boot partition (/dev/nvme0n1p2).</li>
        <li>It loads the Kernel and Initrd into memory and starts Ubuntu.</li>
      </ol>
      <b>Key GRUB Files on your Ubuntu: </b>
      <ul>
        <li><b><mark>/boot/grub/grub.cfg: </mark></b>The "master" config file. Do not edit this manually; it’s automatically generated.</li>
        <li><b><mark>/etc/default/grub: </mark></b>This is where you make changes (like changing the timeout or adding "nomodeset").</li>
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
    <td>I2C</td>
    <td>Inter-Integrated Circuit</td>
    <td></td>
  </tr>

  <tr>
    <td>initramfs</td>
    <td>Initial RAM filesystem</td>
    <td>initramfs (Initial RAM Filesystem) is a tiny, temporary root filesystem that loads into your<br>
      RAM right after GRUB but before your actual Ubuntu system starts.<br>
      Think of it as the "bridge" that helps the kernel find and mount your real hard drive.<br>
      <b>Why you need it (especially with your setup)</b><br>
      <ul>
        <li><b>NVMe: </b>The kernel needs a driver to talk to your NVMe SSD.</li>
        <li><b>LVM: </b>Your root partition (/) is hidden inside a Logical Volume.</li>
        <li><b>Kernel's Problem: </b>The kernel alone doesn't know how to "unlock" an LVM volume or talk to every possible SSD brand.
        <li><b>The Solution: </b>GRUB loads the initramfs file (found in /boot/initrd.img-...). This file contains the basic drivers (modules)<br>
          and scripts needed to activate your LVM and mount the real / filesystem.</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>initrd</td>
    <td>Initial RAM disk</td>
    <td>initrd is considered as old term. Nowadays, we more often use the term initramfs in its place.</td>
  </tr>
 
  <tr>
    <td>Kconfig</td>
    <td>Kernel Configuration</td>
    <td>System for selecting kernel features</td>
  </tr>

  <tr>
    <td>Kbuild</td>
    <td>System for selecting kernel features</td>
    <td>Kernel Build System</td>
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
    <td>LPA</td>
    <td>Large Physical Address</td>
    <td></td>
  </tr>
  
  <tr>
    <td>MAC</td>
    <td>Mandatory Access Control</td>
    <td></td>
  </tr>
  
  <tr>
    <td>MMU</td>
    <td>Memory Management Unit</td>
    <td>Hardware for memory translation</td>
  </tr>

  <tr>
    <td>OF</td>
    <td>Open Firmware</td>
    <td>Used for device tree bindings</td>
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
    <td>PGD</td>
    <td>Page Global Directory</td>
    <td>It is the <b>top-level page table</b> used by the Linux kernel to translate <b>virtual addresses → physical addresses.</b></td>
  </tr>
  
  <tr>
    <td>PMD</td>
    <td>Page Middle Directory</td>
    <td>It is the third level in the Linux page table hierarchy (for most modern configs) and sits between PUD and PTE.</td>
  </tr>
  
  <tr>
    <td>POST</td>
    <td>Power On Self Test</td>
    <td></td>
  </tr>

  <tr>
    <td>PSS</td>
    <td>Proportional Set Size</td>
    <td>Physical memory used by a process, where shared pages are divided proportionally among all sharers.<br> 
      <b>Example:</b><br>
      <ul>
        <li>2 processes share a 10 MB library</li>
        <li>Each process gets 5 MB PSS from that library</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>PTE</td>
    <td>Page Table Entry</td>
    <td>It is the lowest (leaf) level of the Linux page table hierarchy and directly maps a virtual page to a physical page.<br>
      <mark><b>Virtual Address -->  PGD (L0) → PUD (L1) → PMD (L2) → PTE (L3) → Physical Page (4 KB).</b></mark>
    </td>
  </tr>

  <tr>
    <td>PUD</td>
    <td>Page Upper Directory</td>
    <td>It is the second level in the Linux page table hierarchy and sits between PGD and PMD.</td>
  </tr>

  <tr>
    <td>RISC</td>
    <td>Reduced Instruction Set Computer</td>
    <td></td>
  </tr>

  <tr>
    <td>RSS</td>
    <td>Resident Set Size</td>
    <td>The amount of physical RAM currently occupied by a process. RSS counts only pages that are resident in RAM, such as:
      <ul>
        <li>Code (text) pages</li>
        <li>Heap</li>
        <li>Stack</li>
        <li>Shared libraries (counted per process)</li>
      </ul>
    </td>
  </tr>

  <tr>
    <td>RUID</td>
    <td>Real User ID</td>
    <td>Who started the process.!</td>
  </tr>
  
  <tr>
    <td>SELinux</td>
    <td>Security Enhanced Linux</td>
    <td></td>
  </tr>

  <tr>
    <td>SIMD</td>
    <td>Single Instruction, Multiple Data</td>
    <td></td>
  </tr>
  
  <tr>
    <td>SMP</td>
    <td>Symmetric MultiProcessing</td>
    <td>Multiple CPUs sharing memory</td>
  </tr>

  <tr>
    <td>SPDX</td>
    <td>Software Package Data Exchange</td>
    <td>A shorthand and concise format for expressing the license the code is under. Must be 1st line in every source file.<br>
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
    <td>It’s a <b>CPU hardware cache</b> that speeds up <b>virtual → physical address translation.</b></td>
  </tr>

  <tr>
    <td>TGID</td>
    <td>Thread Group ID</td>
    <td></td>
  </tr>

  <tr>
    <td>TTBR0</td>
    <td>Translation Table Base Register 0</td>
    <td>It is is an <b>ARM64 CPU register</b> that tells the MMU <b>where the page tables for user space start.<br>
      TTBR0_EL1 </b>holds the physical base address of the page tables used for translating user-space virtual addresses.
    </td>
  </tr>

  <tr>
    <td>TTBR1</td>
    <td>Translation Table Base Register 1</td>
    <td>For kernel paging table.</td>
  </tr>
 
  <tr>
    <td>UEFI</td>
    <td>Unified Extensible Firmware Interface</td>
    <td>
      <ul>
        <li>UEFI (Unified Extensible Firmware Interface) is the modern replacement for the legacy BIOS.</li>
        <li>Much more secure, it only allow "signed" operating systems (apps) to be booted via it.</li>
        <li>It requires a special partition called ESP (EFI System Partition); it holds a .efi file that contains<br>
          the initialization code and data, unlike the BIOS, where it's written in firmware (EEPROM chip).</li>
        <li>Faster than BIOS.</li>
        <li>It lets you run 32- or 64 bit code.</li>
        <li>Drive size: the BIOS supports only up to 2.2 TB disks, whereas UEFI can support disks upto 9 ZB(zettabytes) in size.</li>
      </ul>
    </td>
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
  
</table>
