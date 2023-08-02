<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
  <xsl:template match="/">
  <html>
    <body>
      <table border="1">
        <thead>

          <tr>
            <th>Full Name</th>
            <th>Designation</th>
            <th>Address</th>
          </tr>
        </thead>
        <tbody>

          <xsl:for-each select="company/employee">
          <tr>
            <th><xsl:value-of select="fullname"/></th>
            <th><xsl:value-of select="designation"/></th>
            <th><xsl:value-of select="address"/></th>
          </tr>
        </xsl:for-each>
      </tbody>
      </table>
    </body>
  </html>
  </xsl:template>
</xsl:stylesheet>
