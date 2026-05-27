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
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Linux Kernel Abbreviations</title>

    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f5f5f5;
            margin: 20px;
        }

        h1 {
            text-align: center;
            color: #333;
        }

        table {
            width: 100%;
            border-collapse: collapse;
            background-color: white;
        }

        th, td {
            border: 1px solid #999;
            padding: 10px;
            text-align: left;
            vertical-align: top;
        }

        th {
            background-color: #d9534f;
            color: white;
        }

        tr:nth-child(even) {
            background-color: #f2f2f2;
        }

        .abbr {
            font-weight: bold;
            color: #004080;
            white-space: nowrap;
        }

        .fullform {
            font-weight: bold;
            color: #222;
        }

        .desc {
            line-height: 1.5;
        }
    </style>
</head>
<body>

<h1>Linux Kernel Abbreviations</h1>

<table>
    <thead>
        <tr>
            <th>Abbreviation</th>
            <th>Full Form</th>
            <th>Description</th>
        </tr>
    </thead>

    <tbody>

        <tr>
            <td class="abbr">GKI</td>
            <td class="fullform">General Kernel Image</td>
            <td class="desc"></td>
        </tr>

        <tr>
            <td class="abbr">LKM</td>
            <td class="fullform">Loadable Kernel Module</td>
            <td class="desc">
                Kernel code loaded/unloaded at runtime.
            </td>
        </tr>

        <tr>
            <td class="abbr">MMU</td>
            <td class="fullform">Memory Management Unit</td>
            <td class="desc">
                Hardware responsible for virtual-to-physical memory translation.
            </td>
        </tr>

        <tr>
            <td class="abbr">DTB</td>
            <td class="fullform">Device Tree Blob</td>
            <td class="desc">
                Binary hardware description used by the Linux kernel.
            </td>
        </tr>

        <tr>
            <td class="abbr">DTS</td>
            <td class="fullform">Device Tree Source</td>
            <td class="desc">
                Human-readable source used to generate DTB.
            </td>
        </tr>

        <tr>
            <td class="abbr">GRUB</td>
            <td class="fullform">Grand Unified Bootloader</td>
            <td class="desc">
                Default bootloader for x86/x86_64 Linux systems.
            </td>
        </tr>

        <tr>
            <td class="abbr">UEFI</td>
            <td class="fullform">Unified Extensible Firmware Interface</td>
            <td class="desc">
                Modern replacement for BIOS with secure and flexible boot support.
            </td>
        </tr>

        <tr>
            <td class="abbr">BIOS</td>
            <td class="fullform">Basic Input Output System</td>
            <td class="desc">
                Legacy firmware interface responsible for boot initialization.
            </td>
        </tr>

        <tr>
            <td class="abbr">RSS</td>
            <td class="fullform">Resident Set Size</td>
            <td class="desc">
                Physical RAM currently occupied by a process.
            </td>
        </tr>

        <tr>
            <td class="abbr">PSS</td>
            <td class="fullform">Proportional Set Size</td>
            <td class="desc">
                Shared memory divided proportionally among processes.
            </td>
        </tr>

        <tr>
            <td class="abbr">TLB</td>
            <td class="fullform">Translation Lookaside Buffer</td>
            <td class="desc">
                CPU cache for speeding up address translation.
            </td>
        </tr>

        <tr>
            <td class="abbr">PGD</td>
            <td class="fullform">Page Global Directory</td>
            <td class="desc">
                Top-level page table in Linux memory management.
            </td>
        </tr>

        <tr>
            <td class="abbr">PUD</td>
            <td class="fullform">Page Upper Directory</td>
            <td class="desc">
                Second-level page table structure.
            </td>
        </tr>

        <tr>
            <td class="abbr">PMD</td>
            <td class="fullform">Page Middle Directory</td>
            <td class="desc">
                Third-level page table structure.
            </td>
        </tr>

        <tr>
            <td class="abbr">PTE</td>
            <td class="fullform">Page Table Entry</td>
            <td class="desc">
                Lowest-level page mapping entry.
            </td>
        </tr>

        <tr>
            <td class="abbr">RCU</td>
            <td class="fullform">Read-Copy-Update</td>
            <td class="desc">
                High-performance synchronization mechanism for concurrent readers/writers.
            </td>
        </tr>

        <tr>
            <td class="abbr">IRQ</td>
            <td class="fullform">Interrupt Request</td>
            <td class="desc">
                Signal sent by hardware to request CPU attention.
            </td>
        </tr>

        <tr>
            <td class="abbr">ISR</td>
            <td class="fullform">Interrupt Service Routine</td>
            <td class="desc">
                Function executed when an interrupt occurs.
            </td>
        </tr>

        <tr>
            <td class="abbr">NMI</td>
            <td class="fullform">Non-Maskable Interrupt</td>
            <td class="desc">
                High-priority interrupt that cannot be disabled.
            </td>
        </tr>

        <tr>
            <td class="abbr">KASAN</td>
            <td class="fullform">Kernel Address Sanitizer</td>
            <td class="desc">
                Detects memory errors such as out-of-bounds access and use-after-free.
            </td>
        </tr>

        <tr>
            <td class="abbr">UBSAN</td>
            <td class="fullform">Undefined Behavior Sanitizer</td>
            <td class="desc">
                Runtime checker for undefined behavior bugs.
            </td>
        </tr>

        <tr>
            <td class="abbr">eBPF</td>
            <td class="fullform">Extended Berkeley Packet Filter</td>
            <td class="desc">
                In-kernel programmable virtual machine used for tracing, networking, and security.
            </td>
        </tr>

        <tr>
            <td class="abbr">BCC</td>
            <td class="fullform">BPF Compiler Collection</td>
            <td class="desc">
                Toolkit for building and running eBPF programs.
            </td>
        </tr>

        <tr>
            <td class="abbr">VFS</td>
            <td class="fullform">Virtual File System</td>
            <td class="desc">
                Abstraction layer providing a common filesystem interface.
            </td>
        </tr>

        <tr>
            <td class="abbr">inode</td>
            <td class="fullform">Index Node</td>
            <td class="desc">
                Kernel object storing metadata about a file.
            </td>
        </tr>

        <tr>
            <td class="abbr">dentry</td>
            <td class="fullform">Directory Entry</td>
            <td class="desc">
                VFS object representing a pathname component.
            </td>
        </tr>

        <tr>
            <td class="abbr">MBR</td>
            <td class="fullform">Master Boot Record</td>
            <td class="desc">
                Legacy disk partitioning and boot sector format.
            </td>
        </tr>

    </tbody>
</table>

</body>
</html>
