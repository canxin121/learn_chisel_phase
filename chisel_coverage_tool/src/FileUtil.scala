package file_util

import java.io.{BufferedWriter, File, FileWriter}

object FileUtil {
  def writeToFile(
      filePath: String,
      content: String,
      overwrite: Boolean = true
  ): Unit = {
    val file = new File(filePath)
    if (!file.exists() || overwrite) {
      val parentDir = file.getParentFile
      if (parentDir != null && !parentDir.exists()) {
        parentDir.mkdirs()
      }
      val bw =
        new BufferedWriter(
          new FileWriter(file)
        )
      try {
        bw.write(content)
      } finally {
        bw.close()
      }
    }
  }

  def readFromFile(filePath: String): String = {
    scala.io.Source.fromFile(filePath).mkString
  }
}
