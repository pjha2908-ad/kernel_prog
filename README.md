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
<table>
  <tr>
    <th>Abbreviation</th>
    <th>Full Form</th>
    <th>Description</th>
  </tr>
  
  <tr>
    <td>GKI</td>
    <td>General Kernel Image.</td>
    <td>GKI provides a generic, common Linux kernel image that works across many Android devices without vendors heavily modifying the core kernel.</td>
  </tr>
  
  <tr>
    <td>LKM</td>
    <td>Loadable Kernel Module</td>
    <td>Kernel code loaded/unloaded at runtime.</td>
  </tr>
  
  <tr>
      <td>MMU</td>
      <td>Memory Management Unit</td>
      <td>Hardware responsible for virtual-to-physical memory translation.</td>
  </tr>

  <tr>
    <td>DTB</td>
    <td>Device Tree Blob</td>
    <td>Binary hardware description used by the Linux kernel.</td>
  </tr>

  <tr>
    <td>DTS</td>
    <td>Device Tree Source</td>
    <td>Human-readable source used to generate DTB.</td>
  </tr>

  <tr>
    <td>GRUB</td>
    <td>Grand Unified Bootloader</td>
    <td>Default bootloader for x86/x86_64 Linux systems.</td>
  </tr>

  <tr>
    <td>UEFI</td>
    <td>Unified Extensible Firmware Interface</td>
    <td>Modern replacement for BIOS with secure and flexible boot support.</td>
  </tr>

  <tr>
    <td>BIOS</td>
    <td>Basic Input Output System</td>
    <td>Legacy firmware interface responsible for boot initialization.</td>
  </tr>

  <tr>
    <td>RSS</td>
    <td>Resident Set Size</td>
    <td>Physical RAM currently occupied by a process.</td>
  </tr>

  <tr>
    <td>PSS</td>
    <td>Proportional Set Size</td>
    <td>Shared memory divided proportionally among processes.</td>
  </tr>

  <tr>
    <td>TLB</td>
    <td>Translation Lookaside Buffer</td>
    <td>CPU cache for speeding up address translation.</td>
  </tr>

  <tr>
    <td>PGD</td>
    <td>Page Global Directory</td>
    <td>Top-level page table in Linux memory management.</td>
  </tr>

  <tr>
    <td>PUD</td>
    <td>Page Upper Directory</td>
    <td>Second-level page table structure.</td>
  </tr>

  <tr>
    <td>PMD</td>
    <td>Page Middle Directory</td>
    <td>Third-level page table structure.</td>
  </tr>

  <tr>
    <td>PTE</td>
    <td>Page Table Entry</td>
    <td>Lowest-level page mapping entry.</td>
  </tr>

  <tr>
    <td>RCU</td>
    <td>Read-Copy-Update</td>
    <td>High-performance synchronization mechanism for concurrent readers/writers.</td>
  </tr>

  <tr>
    <td>IRQ</td>
    <td>Interrupt Request</td>
    <td>Signal sent by hardware to request CPU attention.</td>
  </tr>

  <tr>
    <td>ISR</td>
    <td>Interrupt Service Routine</td>
    <td>Function executed when an interrupt occurs.</td>
  </tr>

  <tr>
    <td>NMI</td>
    <td>Non-Maskable Interrupt</td>
    <td>High-priority interrupt that cannot be disabled.</td>
  </tr>

  <tr>
    <td>KASAN</td>
    <td>Kernel Address Sanitizer</td>
    <td>Detects memory errors such as out-of-bounds access and use-after-free.</td>
  </tr>

  <tr>
    <td>UBSAN</td>
    <td>Undefined Behavior Sanitizer</td>
    <td>Runtime checker for undefined behavior bugs.</td>
  </tr>

  <tr>
    <td>eBPF</td>
    <td>Extended Berkeley Packet Filter</td>
    <td>In-kernel programmable virtual machine used for tracing, networking, and security.</td>
  </tr>

  <tr>
    <td>BCC</td>
    <td>BPF Compiler Collection</td>
    <td>Toolkit for building and running eBPF programs.</td>
  </tr>

  <tr>
    <td>VFS</td>
    <td>Virtual File System</td>
    <td>Abstraction layer providing a common filesystem interface.</td>
  </tr>

  <tr>
    <td>inode</td>
    <td>Index Node</td>
    <td>Kernel object storing metadata about a file.</td>
  </tr>

  <tr>
    <td>dentry</td>
    <td>Directory Entry</td>
    <td>VFS object representing a pathname component.</td>
  </tr>

  <tr>
    <td>MBR</td>
    <td>Master Boot Record</td>
    <td>
      Legacy disk partitioning and boot sector format.
    </td>
  </tr>
</table>
