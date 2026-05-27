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
    <td>GKI</td>
    <td>General Kernel Image</td>
    <td>GKI provides a generic, common Linux kernel image that works across many Android devices without vendors heavily modifying the core kernel.</td>
  </tr>

  <tr>
    <td>LKM</td>
    <td>Loadable Kernel Module</td>
    <td>Kernel code loaded/unloaded at runtime.</td>
  </tr>

 <tr>
   <td>debugfs</td>
   <td>Debug File System</td>
   <td></td>
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
   <td>MMU</td>
   <td>Memory Management Unit</td>
   <td>Hardware for memory translation</td>
 </tr>

 <tr>
   <td>SMP</td>
   <td>Symmetric MultiProcessing</td>
   <td>Multiple CPUs sharing memory</td>
 </tr>

 <tr>
   <td>BSP</td>
   <td>Board Support Package</td>
   <td>Support files for hardware/SoC</td>
 </tr>

 <tr>
   <td>DSP</td>
   <td>Digital Signal Processor</td>
   <td>Special processor for signal ops</td>
 </tr>

 <tr>
   <td>HAL</td>
   <td>Hardware Abstraction Layer</td>
   <td>Layer between hw and OS</td>
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
   <td>OF</td>
   <td>Open Firmware</td>
   <td>Used for device tree bindings</td>
 </tr>

 <tr>
   <td>SELinux</td>
   <td>Security Enhanced Linux</td>
   <td></td>
 </tr>

 <tr>
   <td>MAC</td>
   <td>Mandatory Access Control</td>
   <td></td>
 </tr>

 <tr>
   <td>PCIe</td>
   <td>PCI Express</td>
   <td></td>
 </tr>

 <tr>
   <td>I2C</td>
   <td>Inter-Integrated Circuit</td>
   <td></td>
 </tr>

 <tr>
   <td>.ko</td>
   <td>Kernel object</td>
   <td>Give us kernel functionality in a modular manner.</td>
 </tr>

 <tr>
   <td>defconfig</td>
   <td>Default Kernel Configuration</td>
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
      <li>The Solution: GRUB loads the initramfs file (found in /boot/initrd.img-...). This file contains the basic drivers (modules)<br>
        and scripts needed to activate your LVM and mount the real / filesystem.</li>
    </ul>
  </td>
 </tr>


</table>
